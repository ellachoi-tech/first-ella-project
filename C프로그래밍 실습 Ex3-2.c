#include <stdio.h>

int main()
{
	int a = 5; //0101
	int b = 8; //1000
	int c = 2; //0010

	int num1 = a & b; // 0000: 0
	int num2 = a | b; // 1101: 13
	int num3 = a | c; // 0111: 7
	int num4 = (a & b) | c; // 0010: 2

	printf("%d %d %d %d\n", num1, num2, num3, num4);

	return 0;
}