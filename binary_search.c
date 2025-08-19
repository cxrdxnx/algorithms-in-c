#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


/*
    Program: Binary Search Implementation

    Description: Performs binary search on a user-defined sorted array to find a target number.

    Author: cxrdxnx (Mateo Cardona)

    Date: 08/01/2024
*/


// Function declarations
void receiveList(void);
void searchBinary(int [], int);

int main(void) {
    // Call the function to receive the array from the user
    receiveList();

    // Pause the console (works on Windows)
    system("pause");

    return 0;
}

// Function to ask the user for the array size and its elements
void receiveList(void) {
    int arraySize = 0;

    printf("Binary Search in an Array\nEnter the size of the array\nSize of the array: ");
    scanf("%i", &arraySize);

    int numberArray[arraySize];
    int elementIndex = 0;

    printf("\nPlease enter %i elements for the array\n", arraySize);

    // Fill the array with user input
    for (elementIndex = 0; elementIndex < arraySize; elementIndex++) {
        printf("Element at position %i / Enter the value: ", elementIndex);
        scanf("%i", &numberArray[elementIndex]);
    }

    // Display the entered array
    printf("\nThe array of size %i is:\n", arraySize);
    for (elementIndex = 0; elementIndex < arraySize; elementIndex++) {
        printf("%i ,", numberArray[elementIndex]);
    }

    printf("\n\n");

    // Call the binary search function
    searchBinary(numberArray, arraySize);
    return;
}

// Function to perform binary search on the array
void searchBinary(int numberArray[], int arraySize) {
    int targetNumber = 0;
    int rightIndex = 0, leftIndex = 0, middleIndex = 0;
    int foundFlag = 0;

    printf("Enter the number to search: ");
    scanf("%i", &targetNumber);

    rightIndex = arraySize - 1;
    middleIndex = (leftIndex + rightIndex) / 2;

    // Binary search loop
    while (leftIndex <= rightIndex && !foundFlag){
        // Update the middle index
        middleIndex = (leftIndex + rightIndex) / 2;

        if (numberArray[middleIndex] == targetNumber) {
            printf("The number %i was found at position %i in the array\n\n", targetNumber, middleIndex);
            foundFlag = 1;
        }
        // If the target is smaller than the middle value
        else if (numberArray[middleIndex] > targetNumber) {
            rightIndex = middleIndex - 1;
        }
        // If the target is greater than the middle value
        else {
            if (numberArray[middleIndex] < targetNumber) {
                leftIndex = middleIndex + 1;
            }
        }
    }

    // If the number was not found
    if (foundFlag == 0) {
        printf("The number %i is not in the array\n\n", targetNumber);
    }

    return;
}
