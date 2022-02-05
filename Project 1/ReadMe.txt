T04_G04
GROUP MEMBERS:
-Fábio Araújo de Sá (up202007658)
-Pedro Pereira Ferreira (up202004986)


PROGRAM DEVELOPMENT STATE:

- All the objectives of this project were completed:

-> Use of program control structures (selection and repetition): This objetive was achieved, since we used that structures in all code sectores: specially on verifying invalid inputs sections, also on the player and robots's  movements mechanisms, etc.

-> Use of several types of data structures (strings, arrays/vectors, structs, files): This objective was achieved: The player's name is a string, for example; we assert the maze as a 2D array; the robots and the player were asserted as structs; the records of the winners of each maze are saved in files that are generated at the end of the game, in case the player completes the maze; we also created vectors in order to eliminate duplicated names and times on the records's file, the robots were also stored in a vector too;

-> Use of functions: This objective was completed, since almost everything in our code is defined as a function;

-> Development of simple program interfaces: This objective was completd because we displayed on the console a menu which indicates the possible commands executable (show the rules, choose a maze to play or exit), asking the user to type the respective number of each command; while playing, the maze is displayed on the console and asks the user to select a button in order to move on the maze in each play, by using cin and cout; if he/she wins, the user is asked to input its name, in order to display it on the records file, with a getline command;

-> Management of invalid keyboard inputs: This objective was achieved, since all the possible invalid inputs, were taken form the buffer and the modified flags were cleared, thanks to cin.clear() and cin.ignore() commands, and also a error message will be displayed on the screen, asking the user for a valid input until he/she types a valid command;

-> Formatting outputs: This objective was achieved, because the Rercord files had always the same header, by writing it in the file's creation;

-> Reading from and writing to text files: This objective was completed since the code extracts the number and lines needed and the format of the maze, by reading it from the "MAZE_XX.TXT" file, using filestreams commands (the inStream command); in addition of that, the players who had completed a certain maze, and the time needed to complete it are extracted from the Records file in the same way that was estracted the maze (that is, using the inStream command) and the new player that completed the maze successfully (in order words, the name of the user, if had completed the maze), was written to that file using the filestream commands (in this case, it was used the outStream command); 

IMPROVEMENTS:

- Allocation of the maze: We had decided to store the maze in a 2d array, allocating dynamically the memory needed with the malloc() and free() methods, instead of storing it in a vector, since it occupates the storage memory strictly needed, determined by its numbers of collumns and lines, and also free the memory used at the end of game, which improves the efficiency of the program;

- Play again: We implemented of play again option without being necessary exit the game and start it again, by asking the user if he/she wants to play again and in affirmative case, the types the 'y' or 'Y' character, otherwise he/she types 'n' or 'N' character. if he/she has wished to play again, a boolean flag declarated as play_again becomes true and the the main menu is shown again, otherwise it becomes false, resulting in the program's execution end;

- Writing to the Record files: We had decided to only writes to the Record files the best time of the players, that is if a user plays the completes the same level twice, it will only appear on that file the name of the user associated to the best time (the less time taken to complete the maze). The user is also informed whether he/she has completed the best time in a shorter period of time or he/she has already completed in a better time;

- Iterative programming: Firstly, we had tried to implement our program in a recursive way since it was easier to read the script and makes the play again section easier to add on the script; however, we deciced to implement it in an iterative way, because of the better efficiency of the program, since it didn't generate stacks, in spite of the recursive code. In order to do that, we use a while loop that uses the play_again flag to determine when to end the execution of the program;

- Generation of the Record files: We decided to create the Record files of the maze chosen by the user in case it hasn't been created yet, by creating a .txt file by using the the number's maze ("MAZE_XX_WINNERS.TXT", where XX is the number of the maze), and writes to it the file's header, the name and time needed by the first player who had completed succesfully the chosen maze.


MAIN DIFFICULTIES:

- Trying to clear the buffer after a invalid input without result in a infinite loop;
How we solved:

-> cin.clear();
-> cin.ignore(numeric_limits<streamsize>::max(), '\n');

- Returning the maze to the play function;
How we soved:

-> Allocate dinamically the memory for the maze on main() function, create another function (void fill_maze(char **maze, int lines, int cols, string file_name)) which modifies that space so that we can display the maze;

- We were having difficulties to return the updated record file, since we are struggling sorting the times and names before writing them on the file;
How we solved:

-> We sorted of times by ascending order sorted the name of players lexicographically and we removed the duplicated values in both vectors, to prevent from creating conflicts.