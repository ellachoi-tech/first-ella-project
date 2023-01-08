#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int money;

	printf("##지폐로 교환할 돈은 ? ");
	scanf("%d", &money);

	printf("오만원짜리 ==> %d장\n",money/50000);

	money = money % 50000;
	printf("만원짜리 ==> %d장\n", money / 10000);

	money = money % 10000;
	printf("오천원짜리 ==> %d장\n", money / 5000);

	money = money % 5000;
	printf("천원짜리 ==> %d장\n", money / 1000);

	money = money % 1000;
	printf("지폐로바꾸지 못한 잔돈 ==> %d원\n", money);

	return 0;
}