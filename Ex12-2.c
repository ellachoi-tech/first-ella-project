/* ========================================================================
 * ���ϸ� : exercise2.c
 * ----------------------------------------
 * �к� : ��ȭ���ڴ��б�
 *        �޸ձ����̿����к�
 * �й� : 2270090
 * ���� : ���� (ellachoi@ewhain.net)
 * ���� :
 *        �ҽ��� �߸��� �κ��� ã�� ��ġ�ÿ�
 * �̷� :
 *        2022-12-08 : ���� �ۼ� (����)
 * ====================================================================== */
#define _CRT_SECURE_NO_WARNINGS  // for visual studio
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* p;
	int i;

	// �߸��� �κ� char --> char * �� �ٲپ�� �Ѵ�
	//p = (char)calloc(sizeof(char),3);

	p = (char *)calloc(3, sizeof(char));

	for (i = 0; i < 3; i++)
		printf("�Ҵ�� ���� �ʱⰪ p[%d] ==> %d\n", i, p[i]);

	free(p);

	return 0;
}