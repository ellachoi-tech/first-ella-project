/* ========================================================================
 * 파일명 : exercise1.c
 * ----------------------------------------
 * 학부 : 이화여자대학교
 *		  휴먼기계바이오공학부
 * 학번 : 2270090
 * 성명 : 최희나 (ellachoi@ewhain.net)
 * 설명 :
 *		주어진문장을 거꾸로 출력하고 대소문자도 전환
 *      단,포인터 p를 사용할것.
 * 이력 :
 *		2022-11-16 : 최초 작성 (최희나)
 * ====================================================================== */
#define _CRT_SECURE_NO_WARNINGS  // for visual studio
#include <stdio.h>
#include <string.h>

int main()
{
	char ary[25] = "IT 1234 @$% CookBook";
	char* p;
	int i;

	p = ary;
	int diff = 'a' - 'A';


	// *(p+i) 또는 p[i]를 사용
	
	//for (i = sizeof(ary) - 2; i >= 0; i--) {  // 소스 애매한 부분: sizeof 대신 strlen(ary) 사용
	for (i = (int)strlen(ary)-1; i >= 0; i--) {
		if (*(p + i) >= 'A' && *(p + i) <= 'Z') {
			printf("%c", *(p + i) + diff); // 소문자로 변환 (+32)
		}
		else if (*(p + i) >= 'a' && *(p + i) <= 'z') {
			printf("%c", *(p + i) - diff); // 대문자로 변환 (-32)
		}
		else {
			printf("%c", *(p + i)); // 나머지는 그대로  출력
		}
	}
	printf("\n");

	return 0;
}
