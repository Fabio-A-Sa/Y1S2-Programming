# Proj_PROG T04_G04

## Group Members:
- Fábio Araújo de Sá (up202007658)
- Pedro Pereira Ferreira (up202004986)

## Program Development State:
- Day 01 (29/03/2021) <br>
We started the development of Menu function, everything else has to be done; <br>

- Day 02 (30/03/2021) <br>
We started the mazes's files creation, we also updated the menu's code (finished The Show Rules - the user has the option to go back to main menu); <br>

- Day 03 (31/03/2021) <br>
We updated the maze's files function and created the play function too; <br>

- Day 04 (01/04/2021) <br>
We updated the maze's file function once again so that we can be used by function main() and others; we also creayed a function which fills the memory selected for the maze with it; <br>

- Day 05 (02/04/2021) <br>
We started to work on the game "itself"-we already created the user's/ player's moves, collisions and end game condition has to be done yet; <br>

- Day 06 (03/04/2021) <br>
We completed the functions of player and robots's movements, in addition of that, we also created and finished the collisions functions of both mob's (player and robots);
Imporant note: in order to evaluate the next position of each robot, we decomposed in two direction (x and y) the distance between the robot and the player so that robot movement's funtion could decide in which direction (vertically, horizontally and diagonally) is the shortest path to be closer to the player; <br>

- Day 07 (04/04/2021) <br>
We created the records of the winners's function, the game is almost completed; <br>

- Day 08 (05/04/2021) <br>
We finally upgraded and finished the record of winner's function, the game is completed; <br>

- Day 09 (06/04/2021) <br>
We started correcting and improving our coding: firstly, we debugged the invalid inputs on the various situations (menu, choosing the maze, and in the player's commands) and also correctd the player's movements; <br>

- Day 10 (07/04/2021) <br>
We completed the program's documentation and put comments in the script in order to describe the role of each part. We also developed a feature that only inserts the best time of the user, if his/her name already existed before in the record's file; <br>

## Improvements were made:

 - [X] Allocation of the maze: We had decided to store the maze in a 2d array, allocating dynamically the memory needed with the malloc() and free() methods, instead of storing it in a vector, since it occupates the storage memory strictly needed, determined by its numbers of collumns and lines, and also free the memory used at the end of game, which improves the efficiency of the program; <br>

- [X] Play again: We implemented of play again option without being necessary exit the game and start it again, by asking the user if he/she wants to play again and in affirmative case, the types the 'y' or 'Y' character, otherwise he/she types 'n' or 'N' character. if he/she has wished to play again, a boolean flag declarated as play_again becomes true and the the main menu is shown again, otherwise it becomes false, resulting in the program's execution end; <br>

- [X] Writing to the Record files: We had decided to only writes to the Record files the best time of the players, that is if a user plays the completes the same level twice, it will only appear on that file the name of the user associated to the best time (the less time taken to complete the maze). The user is also informed whether he/she has completed the best time in a shorter period of time or he/she has already completed in a better time; <br>

- [X] Iterative programming: Firstly, we had tried to implement our program in a recursive way since it was easier to read the script and makes the play again section easier to add on the script; however, we deciced to implement it in an iterative way, because of the better efficiency of the program, since it didn't generate stacks, in spite of the recursive code. In order to do that, we use a while loop that uses the play_again flag to determine when to end the execution of the program; <br>

- [X] Generation of the Record files: We decided to create the Record files of the maze chosen by the user in case it hasn't been created yet, by creating a .txt file by using the the number's maze ("MAZE_XX_WINNERS.TXT", where XX is the number of the maze), and writes to it the file's header, the name and time needed by the first player who had completed succesfully the chosen maze. <br>

## Main Dificults
- Day 2 (30/03/2021) <br>
Trying to clear the buffer after a invalid input without result in a infinite loop. How we solved: <br>
``` 
    #include <limits>
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
```
- Day 03 (31/03/2021) <br> 
Returning the maze to the play function. <br> How we solved (on day 04): <br> allocate dinamically the memory for the maze on main() function, create another function bellow which modifies that space so that we can display the maze
```
void fill_maze(char **maze, int lines, int cols, string file_name)) 
```
 <br>

- Day 07 (04/04/2021) <br>
We are having difficulties to return the updated record file, since we are struggling sorting the times and names before writing them on the file.  <br> How we solved (on day 08):  <br>We sorted of times by ascending order sorted the name of players lexicographically and we removed the duplicated values in both vectors, to prevent from creating conflicts. <br>

<br>


