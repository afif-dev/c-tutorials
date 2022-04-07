/*
C Break and Continue
*/

#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++)
    {
       if (i == 3) {
           printf("break loop on 3\n\n");
           break;
       }
       printf("%d \n", i);
    }
    
    for (int c = 0; c < 5; c++)
    {
       if (c == 3) {
           printf("continue loop after 3\n"); 
           continue;
       }
       printf("%d \n", c);
    }

    return 0;
}
