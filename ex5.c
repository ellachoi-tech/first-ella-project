#include<stdio.h>
int main()
{
	//���� ����
	int opt;
	double num1, num2;
	double result;
	
	printf("<1>���� <2>���� <3>���� <4>������ �� ���ÿ�.");
	scanf("%d", &opt);
	printf("�� ���� �Է��Ͻÿ�.");
	scanf("%f %f", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	else if (opt == 2)
		result = num1 - num2;
	else if (opt == 3)
		result = num1 * num2;
	else
		result = num1 / num2;

	//���
	printf("����� %f�Դϴ�", result);
	return 0;
}