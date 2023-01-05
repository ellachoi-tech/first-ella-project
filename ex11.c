#include <stdio.h>
int main()
{
	int num, result;
	printf("정수 : ");
	scanf("%d", &num);

	if (num >= 0) {
		result = -num;
		printf("양수\n");
	}
	else {
		result = -(num);
		printf("음수\n");
	}
	printf("입력된 값의 반대값은 %d입니다.", result);

	return 0;
}
