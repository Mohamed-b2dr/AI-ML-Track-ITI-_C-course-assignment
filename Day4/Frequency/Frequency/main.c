#include <stdio.h>
#include <string.h>

//Frequency
int main()
{
	char str[100];
	int i;
	int freq[177] = {0};
	gets(str);
	for(i = 0; str[i] != '\0'; i++)
	{
		freq[str[i]]++;
	}

	for(i = 0; i < 177; i++)
	{
		if(freq[i] != 0)
		{
			printf("%c %d\n", i, freq[i]);
		}
	}
	return 0;
}
