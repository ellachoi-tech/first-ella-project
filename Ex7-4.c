#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, sum = 0;


	for (i = 1; i <= 10000; i++) {

		if ((i % 3 == 0) || (i % 4 == 0)) {

			if (!((i % 7 == 0) || (i % 11 == 0))) {
				printf("+%d", i);
				sum += i;
			}
		}

		if ((i % 7 == 0) || (i % 11 == 0)) {
			printf("-%d", i);
			sum -= i;
		}
	}

	printf("\n\n1~10000까지 수열의 합은 %d 입니다.\n", sum);

	return 0;
}
