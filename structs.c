/*
C Structures (structs)
Structures (also called structs) are a way to group several related variables into one place. 
Each variable in the structure is known as a member of the structure.
Unlike an array, a structure can contain many different data types (int, float, char, etc.).

struct MyStructure {   // Structure declaration
  int myNum;           // Member (int variable)
  char myLetter;       // Member (char variable)
}; // End the structure with a semicolon

*/

#include <stdio.h>

// Create a structure called myStructure
struct myStructure {
    int myNum;
    char myLetter;
    char myString[30]; // String
};

int main() {
    // Create a structure variable of myStructure called s1
    struct myStructure s1;
    struct myStructure s2;

    // Assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'B';

    // Assign values to members of s2
    s2.myNum = 8;
    s2.myLetter = 'A';

    // Print values
    printf("My number 2: %d\n", s2.myNum);
    printf("My letter 2: %c\n", s2.myLetter);

    printf("My number 1: %d\n", s1.myNum);
    printf("My letter 1: %c\n", s1.myLetter);


    // Assign a value to the string using the strcpy function
    strcpy(s1.myString, "Some text");
    // Print the value
    printf("My string 1: %s", s1.myString);

    return 0;
}
