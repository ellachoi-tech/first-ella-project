#include <stdio.h>
int main()
{
	int num;
	printf("���� : ");
	scanf("%d", &num);

	if (num >= 0) {
		printf("���\n");
	}
	else
		printf("����\n");

	printf("�Էµ� ���� %d�Դϴ�.", num);

	return 0;
}