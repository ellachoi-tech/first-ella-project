#include<stdio.h>
int main(void)
/*���Ƹ� ����ȸ���� ���� ������ ��Ƽ
�����ڿ� ���� �ʿ��� ġŲ(1�� �� ����), ���ֿ� �ݶ�� 1�� 2ĵ..
�Ϳ�~~����
�ʿ��� ġŲ,����,�ݶ� ����غ�����*/
{
	//���� ���� �� �ʱ�ȭ
	int people, chicken, beer, coke, sum;

	people = 10;
	chicken = people;
	beer = people * 2;
	coke = people * 2;
	//�� �ݾ� ���
	sum = chicken + beer + coke;

	//��� �� ���
	printf("chicken = %d\n", chicken);
	printf("beer = %d\n", beer);
	printf("coke = %d\n", coke);
	printf("sum = %d\n", sum);

	return 0;
}
