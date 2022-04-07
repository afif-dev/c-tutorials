/*
Conditions and If Statements
You learned from the operators comparison chapter, that C supports the usual logical conditions from mathematics:

Less than: a < b
Less than or equal to: a <= b
Greater than: a > b
Greater than or equal to: a >= b
Equal to a == b
Not Equal to: a != b
You can use these conditions to perform different actions for different decisions.

C has the following conditional statements:

Use if to specify a block of code to be executed, if a specified condition is true
Use else to specify a block of code to be executed, if the same condition is false
Use else if to specify a new condition to test, if the first condition is false
Use switch to specify many alternative blocks of code to be executed

# Syntax

if (condition) {
  // block of code to be executed if the condition is true
}

*/
#include <stdio.h>

int main() {
    int x = 20;
    int y = 18;

    if (x > y) {
        printf("x is greater than y\n");
    }

    int time = 22;
    if (time < 10) {
        printf("Good morning.\n");
    } else if (time < 20) {
        printf("Good day.\n");
    } else {
        printf("Good evening.\n");
    }


    // Short Hand If Else
    // Syntax 
    // variable = (condition) ? expressionTrue : expressionFalse;
    int otherTime = 23;
    (otherTime < 22) ? printf("Good time.\n") : printf("Good night.\n") ; 

    return 0;
}
