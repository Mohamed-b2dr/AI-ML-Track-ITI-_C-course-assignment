#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COLUM 4
int main()
{
    int arr[ROW][COLUM];
    int i , j ;
    int student_sum[ROW] ={0} ;
    int sum_col[COLUM] ={0} ;
    int minimall, maximall, ministd, maxstd ;

    //Read & Sum
    for(i=0; i < ROW; i++)
        {
            printf("\n Enter [%d] Student :   ", i+1);
            for(j=0; j < COLUM; j++)
                {
                    printf("\n Enter [%d] subject of Student :   ", j+1);
                    scanf("%d", &arr[i][j]);
                    student_sum[i]+= arr[i][j] ;
                }
            system("cls");
            printf("\n Total Degrees of [%d] Student is [%d]     ", i+1, student_sum[i] );
        }



//mini & max
    minimall, maximall = arr[0][0];
    for(i=0; i < ROW; i++)
        {
            ministd, maxstd =  arr[i][0];
            printf("\n Num [%d] Student :   ", i+1);

            for(j=0; j < COLUM; j++)
                {
                    //every student
                    if (ministd > arr[i][j]){
                        ministd = arr[i][j];
                    }

                    if (maxstd < arr[i][j]){
                        maxstd = arr[i][j];
                    }
                    //Scope All
                    if (minimall > arr[i][j]){

                        minimall = arr[i][j];
                    }

                    if (maximall < arr[i][j]){

                        maximall = arr[i][j];
                    }
                    sum_col[i] += arr[j][i];
              }

            printf("\n\n Average of [%d] Subject is [%d]   ", i+1, sum_col[i]/COLUM );
            //every
            printf("\n Mini Degree of [%d] Student is [%d]   ", i+1, ministd  );
            printf("\n Max Degree of [%d] Student is [%d]   ", i+1, maxstd );
        }
         //ALL
         printf("\n Mini Degree of all Student is [%d]   ", minimall  );
         printf("\n Max Degree of all Student is [%d]   ", maximall );



    return 0;
}
