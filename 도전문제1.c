#include<stdio.h>
int main(void)
{
	//���� ���� �� �ʱ�ȭ
	int bread, count, rest;
	double maxcount;

	bread = 47;
	count = 2;
	maxcount = bread / count;
	rest = bread % count;
	// ������ֱ�
	printf("bread : %d\n", bread);
	printf("count : %d\n", count);
	printf("maxcount : %f\n", maxcount);
	printf("rest : %d\n", rest);

	return 0;
}