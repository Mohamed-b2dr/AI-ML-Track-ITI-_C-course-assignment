#include <stdio.h>
#include <stdlib.h>
#include <MyLibrary.h>
//copy
int main()
{
    char fristarr[10];
    char copyarr[10];
    int i;

    gotoxy(10, 3);
    printf("Enter first arr:");
    gets(fristarr);

    for (i=0; i<10;i++){
        copyarr[i] = fristarr[i];

    }
    gotoxy(10, 5);
    printf("copy arr %s :", copyarr );
    return 0;
}
