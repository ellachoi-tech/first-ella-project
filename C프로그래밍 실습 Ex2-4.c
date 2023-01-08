#include <stdio.h>
int main()
{
	printf("[%d]\n", 1234);
	printf("[%06d]\n", 1234);
	printf("[%5d]\n", 1234);
	printf("[%-5d]\n", 1234);
	printf("[%10.5f]\n", 1234.45000);
	printf("[%6.2f]\n", 123.45);
	printf("[%7.2f]\n", 123.45);

	return 0;
}