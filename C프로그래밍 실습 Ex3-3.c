#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int money;

	printf("##����� ��ȯ�� ���� ? ");
	scanf("%d", &money);

	printf("������¥�� ==> %d��\n",money/50000);

	money = money % 50000;
	printf("����¥�� ==> %d��\n", money / 10000);

	money = money % 10000;
	printf("��õ��¥�� ==> %d��\n", money / 5000);

	money = money % 5000;
	printf("õ��¥�� ==> %d��\n", money / 1000);

	money = money % 1000;
	printf("����ιٲ��� ���� �ܵ� ==> %d��\n", money);

	return 0;
}