#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;

	printf("�� ���� �Է��ϼ���: ");
	scanf("%d %d", &n1, &n2);

	if (n1 > n2) {
		printf(">> �μ��� ����(%d-%d)�� %d �Դϴ�\n", n1, n2, n1 - n2);
	}
	else if (n1 < n2) {
		printf(">> �μ��� ����(%d-%d)�� %d �Դϴ�\n", n2, n1, n2 - n1);
	}
	else if (n1 == n2) {
		printf(">> �μ��� ����(%d-%d)�� %d �Դϴ�\n", n1, n2, n1 - n2);
	}
	else {
		// Not happen!
	}

	return 0;

}