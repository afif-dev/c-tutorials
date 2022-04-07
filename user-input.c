// C User Input
// To get user input, you can use the scanf() function
// ex: scanf("%d", &myNum);

#include <stdio.h>

int main() {
    int myNum;
    char firstName[100];
    char lastName[100];
    
    printf("Type a number: \n");
    scanf("%d", &myNum);
    printf("Your number is: %d\n", myNum);

    printf("Enter your firstname: \n");
    scanf("%s", &firstName);
    printf("Enter your lastname: \n");
    scanf("%s", &lastName);

    printf("Your fullname is: %s %s\n", firstName, lastName);

    return 0;
}