#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	printf("숫자를 입력하세요: ");
	scanf("%d", &n);

	switch (n % 3) {
	case 0:
		printf(">> %d\n", n + 3);
		break;
	default:
		printf(">> %d\n", n % 3);
		break;
	}

	return 0;

}