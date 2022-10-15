#include <stdio.h>
#include <stdlib.h>

float large(float num1, float num2, float num3)
{
   if(num1 >= num2 && num1 >= num3) return num1;
   else if(num2 >= num1 && num2 >= num3) return num2;
   else return num3;
}

int main()
{
   float num1, num2, num3, largest;

   printf("Enter three numbers: \n");
   printf("Enter first number: \n");
   scanf("%f", &num1);
   printf("Enter second number: \n");
   scanf("%f", &num2);
   printf("Enter third number:\n");
   scanf("%f", &num3);

   largest = large(num1, num2, num3);
   printf("Largest number = %.2f",largest);
   return 0;
}
