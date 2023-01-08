/* ========================================================================
 * 파일명 : exercise1.c
 * ----------------------------------------
 * 학부 : 이화여자대학교
 *        휴먼기계바이오공학부
 * 학번 : 2270090
 * 성명 : 최희나 (ellachoi@ewhain.net)
 * 설명 :
 *        무한반복하면서 1~100숫자를 랜덤추출하면서 동적메모리/확장할당
 *        두번째 숫자이후 99가 나오면 종료하고 합을 구한다
 * 이력 :
 *        2022-12-08 : 최초 작성 (최희나)
 * ====================================================================== */
#define _CRT_SECURE_NO_WARNINGS  // for visual studio
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

 /* ========================================================================
  * 함수명 : getRandomNum(int max)
  * 함수설명 :
  *          1~max값 사이 랜덤넘버를 리턴한다.
  * 리턴값 : [int] - 1~max 값 사이 랜덤넘버
  * 매개변수 :
  *          [int max] - 최대 랜덤넘버
  * HISTORY :
  *          2022-12-08 : 최초 작성 (최희나)
  * ====================================================================== */
int
getRandomNum(int max)
{
	return (rand() % max + 1);
}

int main()
{
	int sum = 0;
	int i = 0;
	int cnt = 1;
	int* p;

	// seed 값 설정
	srand((unsigned int)time(NULL));

	// 1st malloc
	p = (int*)malloc(sizeof(int) * cnt);
	p[i] = getRandomNum(100);
	i++;
	cnt++;

	// 2nd~forever realloc until 99
	for (;;) {
		p = (int*)realloc(p, sizeof(int) * cnt);
		p[i] = getRandomNum(100);

		if (p[i] == 99) {
			break;
		}

		i++;
		cnt++;
	}

	printf("랜덤하게 뽑인 숫자(%d) ==> ", cnt - 1);

	for (i = 0; i < cnt - 1; i++) {
		printf("%d ", p[i]);
		sum += p[i];
	}

	printf("\n%d개의 랜덤한 숫자합 ==> %d\n", cnt - 1, sum);

	free(p);

	return 0;
}