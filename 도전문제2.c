#include<stdio.h>
int main(void)
{
	/*해외여행을 위해 한국 돈을 미국 돈으로 환전하고자한다.
1달러가 1390원이라고 할 때 100만원을 환전하면 몇 달러로 받을
수 있을까요? 그리고 환전 후 남은 금액(잔액)은 얼마인지 계산해보
세요*/
	//변수 선언 및 초기화
	int money, rate, exchange, rest;

	money = 1000000;
	rate = 1390;
	exchange = money / rate;
	rest = money % rate;

	//출력해주기
	printf("환전할 금액 : %d\n", money);
	printf("환율 : %d\n", rate);
	printf("%d달러 환전\n", exchange);
	printf("남은 금액 %d원\n", rest);

	return 0;
}