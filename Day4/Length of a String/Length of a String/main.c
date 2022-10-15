#include <stdio.h>
#include <stdlib.h>

//Length of a String
int main()
{
    char ch[100];
    int i,length=0;


    printf("Enter a string: \n");
    gets(ch);


    for(i=0; ch[i]!='\0'; i++)
    {
        length++;
    }

    printf("\nLength of string: %d",length);

     return 0;
}
