#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	//�Է¹��� ������ ���/���� �Ǵ� ���α׷�
	//���� ����
	int num;
	printf("������ �Է��Ͻÿ� ==> ");
	scanf("%d", &num);

	if (num>0)
		printf("�� ���� ����Դϴ�.\n");
	else
		printf("�� ���� ����� �ƴմϴ�.\n");

	printf("�� ������ %d�Դϴ�", num);
	return 0;
}