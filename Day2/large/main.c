#include <stdio.h>
#include <stdlib.h>

int main() {

  float num1, num2 , num3;

  printf("Enter three different numbers: ");
  scanf("%f %f %f", &n1, &n2, &n3);

  if (num1 >= num2 && num1 >= num3)
    printf("%f is the largest number.", n1);


  if (num2 >= num1 && num2 >= num3)
    printf("%f is the largest number.", n2);

  if (num3 >= num1 && num3 >= num2)
    printf("%f is the largest number.", n3);

  return 0;
}
