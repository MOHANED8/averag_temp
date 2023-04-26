//Mohaned Hassanin 2200000776
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUM_ROWS 30
#define NUM_COLUMNS 24

int main() {
    // Declare and initialize the temperature array with some dummy values
    int temperature[NUM_ROWS][NUM_COLUMNS];
    for (int i = 0; i < NUM_ROWS; i++) {
        for (int j = 0; j < NUM_COLUMNS; j++) {
            temperature[i][j] = i + j;
        }
    }

    // Prompt the user to enter the day number
    int day;
    printf("Enter day number: ");
    scanf("%d", &day);

    // Get a pointer to the row of the temperature array corresponding to the given day
    int* my_pointer = temperature[day - 1];

    // Calculate the average temperature for the given day by summing up all the temperatures in the row
    double sum = 0;
    for (int i = 0; i < NUM_COLUMNS; i++) {
        sum += my_pointer[i];
    }
    double average = sum / NUM_COLUMNS;

    // Print out the average temperature for the given day with two decimal places
    printf("The average temperature for day %d is %.2f\n", day, average);

    return 0;
}