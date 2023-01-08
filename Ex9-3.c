/* ========================================================================
 * 파일명 : exercise3.c
 * ----------------------------------------
 * 학부 : 이화여자대학교
 *		  휴먼기계바이오공학부
 * 학번 : 2270090
 * 성명 : 최희나 (ellachoi@ewhain.net)
 * 설명 :
 *		빈도분포를 출력
 *
 * 이력 :
 *		2022-11-02 : 최초 작성 (최희나)
 * ====================================================================== */
#define _CRT_SECURE_NO_WARNINGS  // for visual studio
#include <stdio.h>

int main()
{
	int score[15] = {
		17, 38, 100, 95, 23,
		62, 77, 45, 69, 81,
		83, 51, 42, 36, 60 };

	int bindo[11] = { 0 }; // 빈도분포 배열
	int i, j;

	// step 1: score배열로 bindo 배열을 만든다.

	for (i = 0; i < 15; i++) {
		if (score[i] <= 9)
			bindo[0]++;
		else if (score[i] > 9 && score[i] <= 19)
			bindo[1]++;
		else if (score[i] > 19 && score[i] <= 29)
			bindo[2]++;
		else if (score[i] > 29 && score[i] <= 39)
			bindo[3]++;
		else if (score[i] > 39 && score[i] <= 49)
			bindo[4]++;
		else if (score[i] > 49 && score[i] <= 59)
			bindo[5]++;
		else if (score[i] > 59 && score[i] <= 69)
			bindo[6]++;
		else if (score[i] > 69 && score[i] <= 79)
			bindo[7]++;
		else if (score[i] > 79 && score[i] <= 89)
			bindo[8]++;
		else if (score[i] > 89 && score[i] <= 99)
			bindo[9]++;
		else if (score[i] == 100)
			bindo[10]++;
	}

	// step 2: 빈도분포배열로 출력

	for (i = 0; i < 11; i++) {
		if (i == 10)
			printf("%d0점은: ", i);
		else
			printf("%d9까지 : ", i);

		for (j = 0; j < bindo[i]; j++)
			printf("*");

		printf("\t(%-d 명)\n", bindo[i]);
	}

	return 0;
}
