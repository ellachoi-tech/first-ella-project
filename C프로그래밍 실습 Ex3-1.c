#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sec;

	printf("## ����� �ʴ�? : ");
	scanf("%d", &sec);

	printf("�ð��� ==> %d�ð�\n", sec / 3600);

	sec = sec % 3600;
	printf("����==> %d��\n", sec / 60);

	sec = sec % 60;
	printf("�ʴ�==> %d��\n", sec);

	return 0;

}