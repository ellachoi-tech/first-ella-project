/* ========================================================================
 * ���ϸ� : exercise3.c
 * ----------------------------------------
 * �к� : ��ȭ���ڴ��б�
 *        �޸ձ����̿����к�
 * �й� : 2270090
 * ���� : ���� (ellachoi@ewhain.net)
 * ���� :
 *        �Է��� ������ ������ ��µǵ��� ��ĭ�� ä��ÿ�
 * �̷� :
 *        2022-12-08 : ���� �ۼ� (����)
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
		printf("%d��° ���ڿ�(99�ڱ���): ", i + 1);
		//gets(imsi);
		scanf("%[^\n]s", imsi); // \n���� ���ڿ��Է�

		size = (int)strlen(imsi);

		// ��ĭ�� ä��������
		p[i] = (char *)calloc(size+1, sizeof(char)); // \0�� ���� 1 �߰�

		strcpy(p[i], imsi);

		getchar(); //������ �Էµ� \n ó��
	}

	printf("\n=== �Է��� ������ ��===\n");

	for (i = 0; i < 3; i++) {
		// ��ĭ�� ä��������
		printf("%d��° ���ڿ��� ���ڰ���: %s(��%d��)\n", i + 1, p[i], (int)strlen(p[i]));
	}

	for (i = 0; i < 3; i++) {
		free(p[i]);
	}

	return 0;
}
