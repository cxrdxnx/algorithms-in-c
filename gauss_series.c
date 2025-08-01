
/*
 * Program: Gauss Series 
 * Description: Computes the sum of the series 1 + 2 + 3 + ... + N, where N is provided by the user.
 * Author: cxrdxnx (Mateo Cardona)
 * Date: 08/01/2024
 */

#include <stdio.h>      // Includes the standard input/output library (for printf and scanf)
#include <stdlib.h>     // Includes system-related functions (for system("pause"))

// Function declaration for GaussTheorem, which takes an integer as a parameter
void GaussTheorem(int number);

// Function definition for GaussTheorem
void GaussTheorem(int number) {
    int interactions = 0;           // Counter used to loop through the series
    int resultOfTheorem = 0;        // Variable to store the final result of the sum

    // Base case: if the input number is 0, the sum is 0
    if (number == 0) {
        printf("The result of the summation of Gauss with the number is %i, %i\n\n\n", number, resultOfTheorem);
    }
    // Base case: if the number is 1, the sum is 1
    else if (number == 1) {
        resultOfTheorem = 1;
        printf("The result of the summation of Gauss with the number is %i, %i\n\n\n", number, resultOfTheorem);
    }
    // General case: number greater than 1
    else {
        // Loop to print the series: 1 + 2 + 3 + ... + number
        for (interactions = 1; interactions <= number; interactions++) {
            printf("%i ", interactions);   // Print the current number
            if (interactions < number) {
                printf("+ ");              // Print the '+' symbol if it's not the last number
            }
        }

        // Calculate the sum using Gauss's formula: n(n + 1) / 2
        resultOfTheorem = (number * (number + 1)) / 2;

        // Print the result right after the '=' symbol
        printf("= %i\n", resultOfTheorem);

        // Final summary line
        printf("The result of the summation of Gauss with the number is %i, %i\n\n\n", number, resultOfTheorem);
    }

    return; // End of function
}

// Main function of the program
int main(void) {
    int number = 0; // Variable to store the user input

    // Ask the user for an integer number
    printf("Please enter the number you wish to use to start the Gauss series: ");
    scanf("%i", &number); // Store the input into the 'number' variable

    // Call the function that calculates the Gauss summation
    GaussTheorem(number);

    // Pause the console window (only works on Windows)
    system("pause");

    return 0; // Return 0 to indicate that the program ended successfully
}

