#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n, count = 0;

	printf("���������� �Է��ϼ���: ");
	scanf("%d", &n);

	for (i = 2; i <= n; i++) {
		if (n % i == 0) count++;
	}

	if (count == 1) {
		printf("%d�� �Ҽ��Դϴ�.\n", n);
	}
	else {
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
	}

	return 0;
}
