/*
While Loop
The while loop loops through a block of code as long as a specified condition is true:

The Do/While Loop
The do/while loop is a variant of the while loop. This loop will execute the code block once, 
before checking if the condition is true, then it will repeat the loop as long as the condition is true.
*/

#include <stdio.h>

int main() {
    int i = 0;
    int c = 0;

    while (i < 8)
    {
        printf("i is %d\n", i);
        i++;
    }
    
    do
    {
        printf("c is %d\n", c);
        c++;
    } while (c < 5);

    return 0;
}
