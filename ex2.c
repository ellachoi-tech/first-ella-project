#include <stdio.h>
int main()
{
	int num;
	printf("정수를 입력하시오 ==> ");
	scanf("%d", &num);

	if (num > 0)
		printf("음수\n");
	else 
		printf("양수\n");
	return 0;
}