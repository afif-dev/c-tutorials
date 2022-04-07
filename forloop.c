/*
For Loop
Syntax
for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
*/

#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++)
    {
        printf("For loop: %d\n", i);
    }
    
    for (int c = 0; c < 10; c = c + 2)
    {
        printf("For loop other: %d\n", c);
    }
    
    return 0;
}
