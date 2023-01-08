/* ========================================================================
 * 파일명 : exercise3.c
 * ----------------------------------------
 * 학부 : 이화여자대학교
 *        휴먼기계바이오공학부
 * 학번 : 2270090
 * 성명 : 최희나 (ellachoi@ewhain.net)
 * 설명 :
 *        입력한 글자의 갯수를 출력되도록 빈칸을 채우시오
 * 이력 :
 *        2022-12-08 : 최초 작성 (최희나)
 * ====================================================================== */
#define _CRT_SECURE_NO_WARNINGS  // for visual studio
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* p[3];
	char imsi[100] = { 0 };
	int i, size;


	for (i = 0; i < 3; i++) {
		printf("%d번째 문자열(99자까지): ", i + 1);
		//gets(imsi);
		scanf("%[^\n]s", imsi); // \n까지 문자열입력

		size = (int)strlen(imsi);

		// 빈칸을 채워넣은곳
		p[i] = (char *)calloc(size+1, sizeof(char)); // \0를 위해 1 추가

		strcpy(p[i], imsi);

		getchar(); //이전에 입력된 \n 처리
	}

	printf("\n=== 입력한 글자의 수===\n");

	for (i = 0; i < 3; i++) {
		// 빈칸을 채워넣은곳
		printf("%d번째 문자열과 글자갯수: %s(총%d자)\n", i + 1, p[i], (int)strlen(p[i]));
	}

	for (i = 0; i < 3; i++) {
		free(p[i]);
	}

	return 0;
}
