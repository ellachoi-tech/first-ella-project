#include<stdio.h>
int main(void)
{
	/*�ؿܿ����� ���� �ѱ� ���� �̱� ������ ȯ���ϰ����Ѵ�.
1�޷��� 1390���̶�� �� �� 100������ ȯ���ϸ� �� �޷��� ����
�� �������? �׸��� ȯ�� �� ���� �ݾ�(�ܾ�)�� ������ ����غ�
����*/
	//���� ���� �� �ʱ�ȭ
	int money, rate, exchange, rest;

	money = 1000000;
	rate = 1390;
	exchange = money / rate;
	rest = money % rate;

	//������ֱ�
	printf("ȯ���� �ݾ� : %d\n", money);
	printf("ȯ�� : %d\n", rate);
	printf("%d�޷� ȯ��\n", exchange);
	printf("���� �ݾ� %d��\n", rest);

	return 0;
}