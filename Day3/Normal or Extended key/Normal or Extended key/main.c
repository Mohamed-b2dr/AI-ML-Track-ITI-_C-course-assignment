#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch, ch2;
    ch = getch();
    if (ch == -32){
        ch2 = getch();
        printf("Extended key %d", ch2);

    }
     else{

        printf("Normal key %d", ch);
     }
    return 0;
}
