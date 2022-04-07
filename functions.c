/*
===============
  C Functions
===============
A function is a block of code which only runs when it is called.
You can pass data, known as parameters, into a function.
Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.

Syntax
void myFunction() {
  // code to be executed
}
*/

#include <stdio.h>
#include <math.h>

// Function declaration
void myFunction();
int sumTwoNum(int x, int y);
void userList(char name[], int age);
int sumRecursion(int k);

// The main method
int main() {
    myFunction(); // call the function
    myFunction();
    myFunction();

    userList("Liam", 3);
    userList("Jenny", 14);
    userList("Anja", 30);
    
    int result = sumTwoNum(5,7);
    printf("Result is = %d\n", result);
    
    printf("Sum Recursion is = %d\n", sumRecursion(10));

    // C Math Functions
    printf("%.2f\n", sqrt(16));
    printf("%.2f\n", ceil(1.4));
    printf("%.2f\n", floor(1.4));
    printf("%.2f\n", pow(4, 3));
    return 0;
}

// Function definition
void myFunction() {
    printf("I just got executed!\n");
}

void userList(char name[], int age) {
    printf("Hello %s. You are %d years old.\n", name, age);
}

int sumTwoNum(int x, int y) {
    return x + y;
}

/*
Recursion
Recursion is the technique of making a function call itself. 
This technique provides a way to break complicated problems down into simple problems which are easier to solve.
*/
int sumRecursion(int k) {
    if(k > 0) {
        return k + sumRecursion(k - 1);
    } else {
        return 0;
    }
}
