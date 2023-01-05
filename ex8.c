#include <stdio.h>
#define PRICE 20000
int main()
{
	//다중 if 문 연습하기
	int age, pay;
	
	printf("나이를 입력하시오 : ");
	scanf("%d", &age);

	if (age < 8) {
		pay = 0;
	}
	else if (age >= 8 && age < 60) {
		pay = PRICE;
	}
	else {
		pay = (int) PRICE * 0.5;
	}

	printf("입장료 : %d", pay);

	return 0;
}