#include<stdio.h>
#define PRICE 20000
int main()
{
	//���� ����
	int age;
	double result;
	//���
	printf("���̸� �Է��Ͻÿ� : ");
	scanf("%d", &age);
	if (age < 8)
		result = 0;
	else if (age >= 8 && age < 60)
		result = PRICE;
	else 
		result = (int)(PRICE * 0.5);

	printf("����� ������ �ݾ��� %d���Դϴ�", result);
	return 0;
}