#include <stdio.h>

int main() {
    char greeting[] = "Hello World!"; 
    int myNumb = 18;
    float myFloat = 2.34;
    double myDouble = 19.88;
    char myLetter = 'D';

    int x = 6, y = 10, z = 15;

    printf("%s\n", greeting);
    printf("%d\n", myNumb);
    printf("%.2f\n", myFloat);
    printf("%.2lf\n", myDouble);
    printf("%c\n\n", myLetter);
    printf("My number is %d and my letter is %c\n\n", myNumb, myLetter);

    printf("Sum x y z equal to %d \n", x + y + z);
    return 0;
}
