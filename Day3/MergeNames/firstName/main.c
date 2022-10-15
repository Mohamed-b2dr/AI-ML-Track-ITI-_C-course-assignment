#include <stdio.h>
#include <stdlib.h>
#include <MyLibrary.h>
int main()
{
    char fristname[10];
    char secondname[10];
    char fullname[20];
    gotoxy(10, 3);
    printf("Enter first name:");
    gets(fristname);
    gotoxy(10, 5);
    printf("Enter second name: ");
    gets(secondname);
    strcpy(fullname, fristname);
    strcat(fullname, " ");
    strcat(fullname, secondname);
    gotoxy(10, 7);
    printf("Full name %s :", fullname );
    return 0;
}
