/* ========================================================================
 * ���ϸ� : exercise1.c
 * ----------------------------------------
 * �к� : ��ȭ���ڴ��б�
 *        �޸ձ����̿����к�
 * �й� : 2270090
 * ���� : ���� (ellachoi@ewhain.net)
 * ���� :
 *        ���ѹݺ��ϸ鼭 1~100���ڸ� ���������ϸ鼭 �����޸�/Ȯ���Ҵ�
 *        �ι�° �������� 99�� ������ �����ϰ� ���� ���Ѵ�
 * �̷� :
 *        2022-12-08 : ���� �ۼ� (����)
 * ====================================================================== */
#define _CRT_SECURE_NO_WARNINGS  // for visual studio
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

 /* ========================================================================
  * �Լ��� : getRandomNum(int max)
  * �Լ����� :
  *          1~max�� ���� �����ѹ��� �����Ѵ�.
  * ���ϰ� : [int] - 1~max �� ���� �����ѹ�
  * �Ű����� :
  *          [int max] - �ִ� �����ѹ�
  * HISTORY :
  *          2022-12-08 : ���� �ۼ� (����)
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

	// seed �� ����
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

	printf("�����ϰ� ���� ����(%d) ==> ", cnt - 1);

	for (i = 0; i < cnt - 1; i++) {
		printf("%d ", p[i]);
		sum += p[i];
	}

	printf("\n%d���� ������ ������ ==> %d\n", cnt - 1, sum);

	free(p);

	return 0;
}