#include <stdio.h>
int main()
{
	int n1, n2;
	printf("�� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &n1, &n2);

	double result;

	if (n2 != 0) {
		result = (double)n1 / n2;
		printf("������ ����� %.2f�Դϴ�.\n", result);
	}
	else {
		printf("0���� ���� �� �����ϴ�.");
	}
	return 0;
}