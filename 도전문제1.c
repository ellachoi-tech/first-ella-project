#include<stdio.h>
int main(void)
{
	//변수 선언 및 초기화
	int bread, count, rest;
	double maxcount;

	bread = 47;
	count = 2;
	maxcount = bread / count;
	rest = bread % count;
	// 출력해주기
	printf("bread : %d\n", bread);
	printf("count : %d\n", count);
	printf("maxcount : %f\n", maxcount);
	printf("rest : %d\n", rest);

	return 0;
}