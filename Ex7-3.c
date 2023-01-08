#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int my_series(int n)
{
	printf("%dx%d", n, n + 1);
	return (n * (n + 1));
}

int main()
{
	int i = 1, sum = 0;

	int n;

	while (1) {

		printf("+");
		sum = sum + my_series(i);
		printf(" sum = %d\n", sum);
		if (sum >= 100) break;


		i++;
		printf("-");
		sum = sum - my_series(i);
		printf(" sum = %d\n", sum);

		if (sum >= 100) break;
		i++;

	}

	printf("\n수열총합이 100이상(%d)이 되는 마지막수는 %d 입니다.\n", sum, i);

	n = 1 * 2 - 2 * 3 + 3 * 4 - 4 * 5 + 5 * 6 - 6 * 7 + 7 * 8 - 8 * 9 + 9 * 10 - 10 * 11 + 11 * 12 - 12 * 13 + 13 * 14 - 14 * 15 + 15 * 16;
	printf("\n검증: +1x2-2x3+3x4-4x5+5x6-6x7+7x8-8x9+9x10-10x11+11x12-12x13+13x14-14x15+15x16 = %d\n", n);

	return 0;
}