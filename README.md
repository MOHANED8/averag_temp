# averag_temp
Program Description
This C program prompts the user to enter a day number and then calculates and displays the average temperature for that day. The temperature data is stored in a 2-dimensional array with 30 rows (corresponding to each day of the month) and 24 columns (corresponding to each hour of the day).

How the program works
1.The program declares and initializes a 2-dimensional integer array named "temperature" with some dummy values.
2.The user is prompted to enter a day number.
3.A pointer named "my_pointer" is assigned to the row of the "temperature" array corresponding to the given day number.
4.The program calculates the average temperature for the given day by summing up all the temperatures in the row pointed to by "my_pointer" and dividing the sum by the number of columns.
5.The program displays the average temperature for the given day with two decimal places.

How to use the program
1.Open a C compiler and create a new C source file.
2.Copy and paste the program code into the file.
3.Save the file with a .c extension.
4.Compile and run the program.
5.Enter a day number when prompted and press Enter.
6.The program will display the average temperature for the given day with two decimal places.

Note: The program assumes that the temperature data is already stored in the "temperature" array. If you want to use real temperature data, you'll need to modify the program to read the data from a file or from user input.
