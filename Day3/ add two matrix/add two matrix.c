#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COLUM 2
int main()
{
    int arr1[ROW][COLUM], arr2[ROW][COLUM];
    int i , j ;
    int arr_result[ROW][COLUM];


    printf("\n First Arr :   ", i+1);
    for(i=0; i < ROW; i++)
        {

            for(j=0; j < COLUM; j++)
                {
                    printf("\n Enter [%d] element :   ", j+1);
                    scanf("%d", &arr1[i][j]);
                }

        }

    system("cls");

    printf("\n Second Arr :   ", i+1);
    for(i=0; i < ROW; i++)
        {
            printf("\n Enter [%d] Student :   ", i+1);
            for(j=0; j < COLUM; j++)
                {
                    printf("\n Enter  Enter [%d] element :   ", j+1);
                    scanf("%d", &arr2[i][j]);

                }

        }

    system("cls");


    for(i=0; i < ROW; i++)
        {
            printf("\n Enter [%d] Student :   ", i+1);
            for(j=0; j < COLUM; j++)
                {
                    arr_result[i][j] = arr1[i][j] + arr2[i][j];

                }

        }


    for(i=0; i < ROW; i++)
        {
            printf("\n Arr Result ");
            for(j=0; j < COLUM; j++)
                {

                    printf("[%d] \t ", arr_result[i][j]);

                }

        }


    return 0;
}

