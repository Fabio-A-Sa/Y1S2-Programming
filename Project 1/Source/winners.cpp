//T04_G04

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <limits>
#include <vector>
#include <algorithm> 
#include <string>
using namespace std;

struct Record_Lines
{
	string name;
	int time;
};

/** This function indicates if a certain time already exists, in order to prevent from conflicts with duplicated times (that is, 2 players spend the same time to complete a certain maze).
 * It returns true if a specific value - @param object - is in @param time_no_dup, otherwise it returns false. **/

bool does_not_exist_int(vector <int> time_no_dup, int object)
{
	for (int i = 0; i < time_no_dup.size() ; i++)
	{
		if (time_no_dup[i] == object)
		{
			return true;
		}
	}
	return false;
}

/** This function which indicates if a certain name already exists, in order to prevent from conflicts with duplicated names (that is, 2 players have the same name).
 * It returns true if a specific string - @param object - is in @param name_no_dup, otherwise it returns false. **/

bool does_not_exist_name(vector <string> name_no_dup, string object)
{
	for (int i = 0; i < name_no_dup.size() ; i++)
	{
		if (name_no_dup[i] == object)
		{
			return true;
		}
	}
	return false;
}

/** This funcion receives a vector with integers - @param times - and returns a new vector without the duplicated values, auxiliated by does_not_exist_int() function. **/

vector <int> times_wo_dup(vector <int> times)
{
	vector <int> time_no_dup;

	int object;
	for (int i = 0; i < times.size(); i++)
	{
		object = times[i];
		if (!does_not_exist_int(time_no_dup, object))
		{
			time_no_dup.push_back(times[i]);		
		}
		
	}

	return time_no_dup;
}

/** This funcion receives a vector with strings - @param names - and returns a new vector without the duplicated ones, auxiliated by does_not_exist_names() function. **/

vector <string> names_wo_dup(vector <string> names)
{
	vector <string> name_no_dup;

	string object;
	for (int i = 0; i < names.size(); i++)
	{
		object = names[i];
		if (!does_not_exist_name(name_no_dup, object))
		{
			name_no_dup.push_back(names[i]);		
		}
		
	}

	return name_no_dup;
}

/** This function writes the names of the players who completed the level and the time that each person needed on the maze's records file (creates that file in case it doesn't exists before)
 * If the user completes the maze that he/she chose to play, inputs his/her name and it will be written on that file.
 * Note: if the name inputed by the user already exists in the file, the program only writes that name once with best time (that is, the less time spent to complete the maze).**/

void winners(int num_maze, string name_player, int time_game, bool &n_record)
{
	vector <int> times;
	vector <string> header;
	vector <string> names;
	vector <Record_Lines> Info;
	string winners_name, new_record, aux;
	ifstream inStream;
	ofstream outStream;

	int idx = 0;
	new_record = name_player;
	string name;

	winners_name = num_maze < 10 && num_maze > 0 ? "MAZE_0" + to_string(num_maze) + "_WINNERS.TXT" : "MAZE_" + to_string(num_maze) + "_WINNERS.TXT"; //?????
	ifstream file(winners_name);

	while (name_player.size() != 15) 
    {
        name_player += ' ';
    }

	if (file.good())
	{
		inStream.open(winners_name);
		getline(inStream, name);
		header.push_back(name);
		getline(inStream, name);
		header.push_back(name);

		bool new_person = true;
		while (!inStream.eof())
		{
			Record_Lines winner;
			getline(inStream, name);
			winner.name = name.substr(0, 15);
			names.push_back(name.substr(0, 15));
			string aux = "";
			for (int i = name.find('-') + 1; i < name.size(); i++)
			{
				if (name[i] != ' ')
				{
					aux += name[i];
				}
			}
			winner.time = stoi(aux);

			if (winner.name == name_player && winner.time < time_game)
			{
				times.push_back(winner.time);
				new_person = false;
			}
			else if (winner.name == name_player && winner.time >= time_game)
			{
				times.push_back(time_game);
				winner.time = time_game;
				new_person = false;
				n_record = true;
			}
			else
			{
				times.push_back(winner.time);
				n_record = true;
			}
				

			Info.push_back(winner);
		}

		inStream.close();

		if (new_person)
		{
			Record_Lines new_winner;
			new_winner.name = name_player;
			new_winner.time = time_game;
			Info.push_back(new_winner);
			times.push_back(time_game);
			names.push_back(name_player);
		}

		times = times_wo_dup(times);
		names = names_wo_dup(names);
		sort(times.begin(), times.end());
		sort(names.begin(), names.end());
		
		outStream.open(winners_name);

		for (string part : header)
			outStream << part << endl;

		for (int time : times)
		{	
			for (string name : names)
			{
				for (Record_Lines person : Info)
				{
					if (time == person.time && time != times[times.size() - 1] && name == person.name)
						outStream << person.name << " - " << person.time << endl;
					else if (time == person.time && name == person.name)
						outStream << person.name << " - " << person.time;
				}

			}

		}

		outStream.close();
	}

	else
	{
		string header = "Player          - Time\n----------------------";
		outStream.open(winners_name);

		outStream << header << endl;
		
		outStream << name_player << " - " << time_game;

		outStream.close();

		n_record = true;
	}
}