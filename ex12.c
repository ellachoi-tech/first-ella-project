#include <stdio.h>
int main()
{
	int n1, n2;
	printf("두 정수를 입력하시오 : ");
	scanf("%d %d", &n1, &n2);

	double result;

	if (n2 != 0) {
		result = (double)n1 / n2;
		printf("나눗셈 결과는 %.2f입니다.\n", result);
	}
	else {
		printf("0으로 나눌 수 없습니다.");
	}
	return 0;
}