#include <stdio.h>
int main()
{
	//���� ����_����� �� ���� �ڷ����°� �ֱ�
	int n1, n2;
	double result;
	//�Է�
	printf("�� ������ �Է��Ͻÿ� ==>");
	scanf("%d %d", &n1, &n2);
	//���
	result = (double)n1 / n2;

	if (n2 == 0)
		printf("0���� ���� �� �����ϴ�.");
	else
		printf("������ ����� %.2f�Դϴ�.", result);
	return 0;
}