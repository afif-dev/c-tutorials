// C Strings
// Syntax ex:
// char greetings[] = "Hello World!";

#include <stdio.h>

int main() {

    char greetings[] = "Hello World!";
    printf("%s\n", greetings);

    // Access first character (0) in greetings
    printf("%c\n", greetings[0]);
    
    // Modify strings
    greetings[0] = 'J';
    printf("%s\n", greetings);

    // Strings size
    printf("%lu\n", sizeof(greetings)); 

    return 0;
}