#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	//입력받은 정수의 양수/음수 판단 프로그램
	//변수 선언
	int num;
	printf("정수를 입력하시오 ==> ");
	scanf("%d", &num);

	if (num>0)
		printf("이 값은 양수입니다.\n");
	else
		printf("이 값은 양수가 아닙니다.\n");

	printf("이 정수는 %d입니다", num);
	return 0;
}