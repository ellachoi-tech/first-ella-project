#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n, sum = 0;

	printf("수를 입력하세요: ");
	scanf("%d", &n);

	for (i = n; i > 0; i /= 10) {
		sum = sum + (i % 10);
	}

	printf("자릿수합계는 %d입니다.\n", sum);

	return 0;
}