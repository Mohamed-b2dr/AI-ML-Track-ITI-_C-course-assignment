#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[7] = {5, 6, 13, 9, 10, 8, 1};
    int maxim, minim;

     for(i=0; i < 7; i++)
        {
            printf("Enter First NUM [%d] of arr :   ", i+1);
            scanf("%d", &arr[i]);

        }
    return 0;
}
