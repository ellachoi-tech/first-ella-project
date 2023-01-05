#include<stdio.h>
#define PRICE 20000
int main()
{
	//변수 선언
	int age;
	double result;
	//출력
	printf("나이를 입력하시오 : ");
	scanf("%d", &age);
	if (age < 8)
		result = 0;
	else if (age >= 8 && age < 60)
		result = PRICE;
	else 
		result = (int)(PRICE * 0.5);

	printf("당신이 내야할 금액은 %d원입니다", result);
	return 0;
}