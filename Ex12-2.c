/* ========================================================================
 * 파일명 : exercise2.c
 * ----------------------------------------
 * 학부 : 이화여자대학교
 *        휴먼기계바이오공학부
 * 학번 : 2270090
 * 성명 : 최희나 (ellachoi@ewhain.net)
 * 설명 :
 *        소스에 잘못된 부분을 찾아 고치시오
 * 이력 :
 *        2022-12-08 : 최초 작성 (최희나)
 * ====================================================================== */
#define _CRT_SECURE_NO_WARNINGS  // for visual studio
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* p;
	int i;

	// 잘못된 부분 char --> char * 로 바꾸어야 한다
	//p = (char)calloc(sizeof(char),3);

	p = (char *)calloc(3, sizeof(char));

	for (i = 0; i < 3; i++)
		printf("할당된 곳의 초기값 p[%d] ==> %d\n", i, p[i]);

	free(p);

	return 0;
}