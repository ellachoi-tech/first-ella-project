#include<stdio.h>
//��� ������ include�� �ٷ� �ؿ� ����
//��� ����� ���ÿ� �ʱ�ȭ�������!
#define TAX_RATE 0.01
int main(void)
{
	//���ٹ� �� �ݾ� total, ���ұݾ� pay, ���� tax
	int total = 50000;
	double pay, tax;
	//��� ���𿡼� const float TAX_RATE = 0.01;
	//ó��
	tax = total * TAX_RATE;
	pay = total + tax;
	//���
	printf("�� �ݾ� : %d\n", total);
	printf("�ΰ���ġ�� : %.f\n", tax);
	printf("���� �ݾ� : %.f\n", pay);
	return 0;

}