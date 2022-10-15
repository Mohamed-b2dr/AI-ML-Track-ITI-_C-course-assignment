#include <stdio.h>

int main() {

     int row =0;
     int cols[3];
     int size,i  ;
     size=0;
     printf("Enter row of arr: ");
     scanf("%d", &row);

     for (i=0;i< row; i++){

        printf("Enter num col of [%d] row of arr: ", i+1);
        scanf("%d", &cols[i]);
        size+=cols[i];
     }

     int arr[size];


    for(i=0; i < size; i++)
            {
                if (i < cols[0]){

                     printf("Enter  elements row of  row1: ");
                     scanf("%d", &arr[i]);
                }

                else if (i < (cols[0]+cols[1])){
                     printf("Enter  elements row of  row2: ");
                     scanf("%d", &arr[i]);
                }

                else if (i < (cols[0]+cols[1]+cols[2])){
                     printf("Enter elements row of  row3: ");
                     scanf("%d", &arr[i]);
                   }
            }
    i = 0;
    while(i< size)
            {
                while (i < cols[0]){

                     printf("[%d]",arr[i]);
                     i++;
                }
                 printf("\n");

                 while (i < (cols[0]+cols[1])){
                     printf("[%d]",arr[i]);
                     i++;
                   }
                 printf("\n");
                while (i < (cols[0]+cols[1]+cols[2])){
                    printf("[%d]",arr[i]);
                    i++;
                   }
            }

 return 0;
}


/*
int main() {

    int number1, number2, sum;

    printf("Enter first integers: ");

    scanf("%d", &number1);

    printf("Enter second integers: ");

    scanf("%d",&number2);

    // calculating sum
    sum = number1 + number2;

    printf(" summation: %d + %d = %d", number1, number2, sum);

    return 0;
}
*/
