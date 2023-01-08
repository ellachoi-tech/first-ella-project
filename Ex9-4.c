/* ========================================================================
 * 파일명 : exercise4.c
 * ----------------------------------------
 * 학부 : 이화여자대학교
 *		  휴먼기계바이오공학부
 * 학번 : 2270090
 * 성명 : 최희나 (ellachoi@ewhain.net)
 * 설명 :
 *		문자열을 입력받고 변환할문자와 새로운문자를 입력받아
 *		변환한후 거꾸로 출력
 * 이력 :
 *		2022-11-02 : 최초 작성 (최희나)
 * ====================================================================== */
#define _CRT_SECURE_NO_WARNINGS  // for visual studio
#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	char ch1, ch2;
	int i;

	// step1: 여러글자를 입력받는다
	printf("여러글자를 입력(최대99자까지): ");
	gets(str);

	// step2: 변경할 기존문자와 새로운문자를 입력받는다.
	printf("기존문자와 새로운문자: ");
	scanf("%c %c", &ch1, &ch2);

	// step3: 기존문자를 새로운문자로 변경하고 거꾸로 출력한다.
	for (i = strlen(str); i >= 0; i--) {
		if (str[i] == ch1)
			str[i] = ch2;
		printf("%c", str[i]);
	}

	printf("\n");

	return 0;
}
