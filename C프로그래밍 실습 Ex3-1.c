#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sec;

	printf("## 계산할 초는? : ");
	scanf("%d", &sec);

	printf("시간은 ==> %d시간\n", sec / 3600);

	sec = sec % 3600;
	printf("분은==> %d분\n", sec / 60);

	sec = sec % 60;
	printf("초는==> %d초\n", sec);

	return 0;

}