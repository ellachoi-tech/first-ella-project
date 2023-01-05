#include <stdio.h>
int main()
{
	int score;
	printf("성적을 입력하시오 : ");
	scanf("%d", &score);

	if (score >= 0 && score <= 100) {
		if (score >= 70)
			printf("PASS!\n");
		else {
			printf("FAIL!\n");
		}
	}
	else
		printf("잘못된 입력입니다.\n");

	return 0;
}