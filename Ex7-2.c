#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n, sum = 0;

	printf("���� �Է��ϼ���: ");
	scanf("%d", &n);

	for (i = n; i > 0; i /= 10) {
		sum = sum + (i % 10);
	}

	printf("�ڸ����հ�� %d�Դϴ�.\n", sum);

	return 0;
}