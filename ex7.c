#include <stdio.h>
int main()
{
	//성적을 입력받아 pass/fail을 결정하는 프로그램
	//변수 선언
	int score;

	printf("성적을 입력하시오:");
	scanf("%d", &score);

	if (score >= 0 && score <= 100)
		if (score >= 70)
			printf("pass\n");
		else
			printf("fail\n");
	else
		printf("잘못된 데이터입니다.\n");

	return 0;
}