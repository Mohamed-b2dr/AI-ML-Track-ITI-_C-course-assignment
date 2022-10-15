#include <stdio.h>

int main()
   {
	int x, y;

    printf("\nInput the first integer: ");

    scanf("%d", &x);

    printf("\nInput the second integer: ");

    scanf("%d", &y);


	printf("Multiply two integers = %d\n",  x * y);

	printf("Div two integers = %f\n", (float)x / y);

	printf("Sum two integers = %d\n",  x + y);

	printf("Sub two integers = %d\n",  x - y);
}
