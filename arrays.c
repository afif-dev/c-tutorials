/*
Arrays
Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
To create an array, define the data type (like int) and specify the name of the array followed by square brackets [].

Syntax & example
int myNumbers[] = {25, 50, 75, 100};
*/

#include <stdio.h>

int main() {
    int myNumber[] = {10, 20, 30, 40, 50};
    printf("myNumber[2] = %d\n", myNumber[2]);

    myNumber[2] = 33; //replace array element
    printf("replace: myNumber[2] = %d\n\n", myNumber[2]);
    
    // for loop
    for (int i = 0; i < 5; i++)
    {
        printf("myNumber[%d] = %d\n", i, myNumber[i]);
    }
    
    // Declare an array of four integers:
    const int SIZE = 4;
    int myNumbers[SIZE];

    // Add elements
    myNumbers[0] = 25;
    myNumbers[1] = 50;
    myNumbers[2] = 75;
    myNumbers[3] = 100;

    for (int c = 0; c < SIZE; c++)
    {
        printf("myNumbers[%d] = %d\n", c, myNumbers[c]);
    }

    return 0;
}
