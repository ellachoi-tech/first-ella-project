#include<stdio.h>
//상수 선언은 include문 바로 밑에 쓰기
//상수 선언과 동시에 초기화해줘야함!
#define TAX_RATE 0.01
int main(void)
{
	//별다방 총 금액 total, 지불금액 pay, 세금 tax
	int total = 50000;
	double pay, tax;
	//상수 선언에서 const float TAX_RATE = 0.01;
	//처리
	tax = total * TAX_RATE;
	pay = total + tax;
	//출력
	printf("총 금액 : %d\n", total);
	printf("부가가치세 : %.f\n", tax);
	printf("지불 금액 : %.f\n", pay);
	return 0;

}