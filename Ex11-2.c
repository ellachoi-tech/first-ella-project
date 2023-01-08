/* ========================================================================
 * 파일명 : exercise2.c
 * ----------------------------------------
 * 학부 : 이화여자대학교
 *        휴먼기계바이오공학부
 * 학번 : 2270090
 * 성명 : 최희나 (ellachoi@ewhain.net)
 * 설명 :
 *        swap 함수를 주소호출에 의한 두문자교환 함수로 변경
 * 이력 :
 *        2022-11-24 : 최초 작성 (최희나)
 * ====================================================================== */
#define _CRT_SECURE_NO_WARNINGS  // for visual studio
#include <stdio.h>

 /* ========================================================================
  * 함수명 : swap
  * 함수설명 :
  *          2개의 캐릭터문자 swap
  * 리턴값 : [void] 없음
  * 매개변수 :
  *          [char *pa] - first charater pointer
  *          [char *pb] - second charater pointer
  * HISTORY :
  *          2022-11-24 : 최초 작성 (최희나)
  * ====================================================================== */
void swap(char* pa, char* pb)
{
	char imsi;

	imsi = *pa;
	*pa = *pb;
	*pb = imsi;
}

int main()
{
	char ch1, ch2;

	printf("두 문자를 입력: ");
	scanf("%c %c", &ch1, &ch2);

	swap(&ch1, &ch2);

	printf("바뀐 문자 ==> %c %c\n", ch1, ch2);

	return 0;
}
