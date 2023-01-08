#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;

	printf("두 수를 입력하세요: ");
	scanf("%d %d", &n1, &n2);

	if (n1 > n2) {
		printf(">> 두수의 차이(%d-%d)는 %d 입니다\n", n1, n2, n1 - n2);
	}
	else if (n1 < n2) {
		printf(">> 두수의 차이(%d-%d)는 %d 입니다\n", n2, n1, n2 - n1);
	}
	else if (n1 == n2) {
		printf(">> 두수의 차이(%d-%d)는 %d 입니다\n", n1, n2, n1 - n2);
	}
	else {
		// Not happen!
	}

	return 0;

}