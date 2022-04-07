/*
Memory Address
When a variable is created in C, a memory address is assigned to the variable.

The memory address is the location of where the variable is stored on the computer.

When we assign a value to the variable, it is stored in this memory address.

To access it, use the reference operator (&), and the result will represent where the variable is stored
*/

#include <stdio.h>

int main() {
    int myAge = 48;
    printf("%p", &myAge);
     
    return 0;
}
