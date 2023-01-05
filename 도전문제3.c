#include<stdio.h>
int main(void)
/*동아리 신입회원을 위한 조촐한 파티
참석자에 맞춰 필요한 치킨(1인 한 마리), 맥주와 콜라는 1인 2캔..
와우~~좋아
필요한 치킨,맥주,콜라를 출력해보세요*/
{
	//변수 선언 및 초기화
	int people, chicken, beer, coke, sum;

	people = 10;
	chicken = people;
	beer = people * 2;
	coke = people * 2;
	//총 금액 계산
	sum = chicken + beer + coke;

	//계산 및 출력
	printf("chicken = %d\n", chicken);
	printf("beer = %d\n", beer);
	printf("coke = %d\n", coke);
	printf("sum = %d\n", sum);

	return 0;
}
