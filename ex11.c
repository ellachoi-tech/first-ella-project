#include <stdio.h>
int main()
{
	int num, result;
	printf("���� : ");
	scanf("%d", &num);

	if (num >= 0) {
		result = -num;
		printf("���\n");
	}
	else {
		result = -(num);
		printf("����\n");
	}
	printf("�Էµ� ���� �ݴ밪�� %d�Դϴ�.", result);

	return 0;
}
