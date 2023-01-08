#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c;

	printf("알파벳을 입력하세요: ");
	scanf("%c", &c);

	if (c >= 'A' && c <= 'Z') {
		printf("대문자 %c 입니다!\n", c);
	}
	else if (c >= 'a' && c <= 'z') {
		printf("소문자 %c 입니다!\n", c);
	}
	else {
		printf("잘못된 입력 %c 입니다!\n", c);
	}

	return 0;

}
