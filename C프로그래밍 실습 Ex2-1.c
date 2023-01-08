#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int n1, n2;
	int mean;

	printf("2개의 정숫값을 입력하세요.\n");
	printf("정수 x: "); scanf("%d", &n1);
	printf("정수 y: "); scanf("%d", &n2);
	mean = (n1 + n2) / 2;

	printf("평균값의 부호를 반전한 값은 %d 입니다.\n", ~mean+1);
	
	return 0; 
}