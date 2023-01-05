#include <stdio.h>
int main()
{
	int num;
	printf("정수 : ");
	scanf("%d", &num);

	if (num >= 0) {
		printf("양수\n");
	}
	else
		printf("음수\n");

	printf("입력된 값은 %d입니다.", num);

	return 0;
}