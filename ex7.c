#include <stdio.h>
int main()
{
	//������ �Է¹޾� pass/fail�� �����ϴ� ���α׷�
	//���� ����
	int score;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &score);

	if (score >= 0 && score <= 100)
		if (score >= 70)
			printf("pass\n");
		else
			printf("fail\n");
	else
		printf("�߸��� �������Դϴ�.\n");

	return 0;
}