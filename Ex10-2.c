/* ========================================================================
 * 파일명 : exercise2.c
 * ----------------------------------------
 * 학부 : 이화여자대학교
 *		  휴먼기계바이오공학부
 * 학번 : 2270090
 * 성명 : 최희나 (ellachoi@ewhain.net)
 * 설명 :
 *		주어진 원본문자열 내림차순으로 정렬, 단, 포인터를 사용할것
 * 이력 :
 *		2022-11-16 : 최초 작성 (최희나)
 * ====================================================================== */
#define _CRT_SECURE_NO_WARNINGS  // for visual studio
#include <stdio.h>
#include <string.h>


 /* ========================================================================
  * 함수명 : char_swap
  * 함수설명 :
  *         swap two characters
  * 리턴값 :  [void]
  * 매개변수 :
  *         [char *a] - first character pointer
  *         [char *b] - second character pointer
  * HISTORY :
  *         2022-11-16 : 최초 작성 (최희나)
  * ====================================================================== */
void char_swap(char* a, char* b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

	return;
}

int main()
{
	char s[40] = "ITCookBookHanbitNetwork";
	char* p;
	int i, j, len;


	// 원본을 dst배열에 복사한후 복사본에서 내림차순 정렬수행
	char dst[40] = { 0 };
	strcpy(dst, s);
	p = dst;
	len = (int)strlen(dst);

	printf("정렬 전 문자열: %s(길이=%d)\n", s, (int)strlen(s));


	for (i = 0; i < len-1; i++) {
		for (j = i + 1; j < len + 1; j++) {
			if (*(p + i) < *(p + j)) {
				char_swap(p + i, p + j);
			}
		}
	}

	printf("정렬 후 문자열: %s(길이=%d)\n", dst, (int)strlen(dst));

	return 0;
}
