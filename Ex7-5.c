#include <stdio.h>
int main()
{
	int num = 6;

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	for (int i = 1; i < num; i++)
	{
		for (int j = 0; j < num * 2 - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
