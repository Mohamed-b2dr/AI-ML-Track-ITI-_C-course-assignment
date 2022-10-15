#include <stdio.h>
#include <stdlib.h>

int main()
{
      float num , sum ;

      do{
        printf("Enter Number: ");
        scanf("%f", &num);
        sum += num;

      }while (sum <= 100);

       printf("Sum = %f", sum);
        return 0;
}

