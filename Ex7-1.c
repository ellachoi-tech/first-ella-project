#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n, count = 0;

	printf("양의정수를 입력하세요: ");
	scanf("%d", &n);

	for (i = 2; i <= n; i++) {
		if (n % i == 0) count++;
	}

	if (count == 1) {
		printf("%d은 소수입니다.\n", n);
	}
	else {
		printf("%d은 소수가 아닙니다.\n", n);
	}

	return 0;
}
