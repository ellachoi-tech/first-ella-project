#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int n1, n2;
	int mean;

	printf("2���� �������� �Է��ϼ���.\n");
	printf("���� x: "); scanf("%d", &n1);
	printf("���� y: "); scanf("%d", &n2);
	mean = (n1 + n2) / 2;

	printf("��հ��� ��ȣ�� ������ ���� %d �Դϴ�.\n", ~mean+1);
	
	return 0; 
}