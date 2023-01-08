/* ========================================================================
 * ���ϸ� : exercise2.c
 * ----------------------------------------
 * �к� : ��ȭ���ڴ��б�
 *		  �޸ձ����̿����к�
 * �й� : 2270090
 * ���� : ���� (ellachoi@ewhain.net)
 * ���� :
 *		�־��� �������ڿ� ������������ ����, ��, �����͸� ����Ұ�
 * �̷� :
 *		2022-11-16 : ���� �ۼ� (����)
 * ====================================================================== */
#define _CRT_SECURE_NO_WARNINGS  // for visual studio
#include <stdio.h>
#include <string.h>


 /* ========================================================================
  * �Լ��� : char_swap
  * �Լ����� :
  *         swap two characters
  * ���ϰ� :  [void]
  * �Ű����� :
  *         [char *a] - first character pointer
  *         [char *b] - second character pointer
  * HISTORY :
  *         2022-11-16 : ���� �ۼ� (����)
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


	// ������ dst�迭�� �������� ���纻���� �������� ���ļ���
	char dst[40] = { 0 };
	strcpy(dst, s);
	p = dst;
	len = (int)strlen(dst);

	printf("���� �� ���ڿ�: %s(����=%d)\n", s, (int)strlen(s));


	for (i = 0; i < len-1; i++) {
		for (j = i + 1; j < len + 1; j++) {
			if (*(p + i) < *(p + j)) {
				char_swap(p + i, p + j);
			}
		}
	}

	printf("���� �� ���ڿ�: %s(����=%d)\n", dst, (int)strlen(dst));

	return 0;
}
