/* ========================================================================
 * ���ϸ� : exercise3.c
 * ----------------------------------------
 * �к� : ��ȭ���ڴ��б�
 *		  �޸ձ����̿����к�
 * �й� : 2270090
 * ���� : ���� (ellachoi@ewhain.net)
 * ���� :
 *		�󵵺����� ���
 *
 * �̷� :
 *		2022-11-02 : ���� �ۼ� (����)
 * ====================================================================== */
#define _CRT_SECURE_NO_WARNINGS  // for visual studio
#include <stdio.h>

int main()
{
	int score[15] = {
		17, 38, 100, 95, 23,
		62, 77, 45, 69, 81,
		83, 51, 42, 36, 60 };

	int bindo[11] = { 0 }; // �󵵺��� �迭
	int i, j;

	// step 1: score�迭�� bindo �迭�� �����.

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

	// step 2: �󵵺����迭�� ���

	for (i = 0; i < 11; i++) {
		if (i == 10)
			printf("%d0����: ", i);
		else
			printf("%d9���� : ", i);

		for (j = 0; j < bindo[i]; j++)
			printf("*");

		printf("\t(%-d ��)\n", bindo[i]);
	}

	return 0;
}
