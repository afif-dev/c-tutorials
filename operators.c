#include <stdio.h>

int main() {

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    int x = 5;
    int y = 3;

    // Comparison Operators
    printf("%d \n", x == y);
    printf("%d \n", x != y);
    printf("%d \n", x > y);
    printf("%d \n", x < y);
    printf("%d \n", x >= y);
    printf("%d \n\n", x <= y);
    
    // Sizeof Operator
    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));

    return 0;
}
