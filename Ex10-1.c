/* ========================================================================
 * ���ϸ� : exercise1.c
 * ----------------------------------------
 * �к� : ��ȭ���ڴ��б�
 *		  �޸ձ����̿����к�
 * �й� : 2270090
 * ���� : ���� (ellachoi@ewhain.net)
 * ���� :
 *		�־��������� �Ųٷ� ����ϰ� ��ҹ��ڵ� ��ȯ
 *      ��,������ p�� ����Ұ�.
 * �̷� :
 *		2022-11-16 : ���� �ۼ� (����)
 * ====================================================================== */
#define _CRT_SECURE_NO_WARNINGS  // for visual studio
#include <stdio.h>
#include <string.h>

int main()
{
	char ary[25] = "IT 1234 @$% CookBook";
	char* p;
	int i;

	p = ary;
	int diff = 'a' - 'A';


	// *(p+i) �Ǵ� p[i]�� ���
	
	//for (i = sizeof(ary) - 2; i >= 0; i--) {  // �ҽ� �ָ��� �κ�: sizeof ��� strlen(ary) ���
	for (i = (int)strlen(ary)-1; i >= 0; i--) {
		if (*(p + i) >= 'A' && *(p + i) <= 'Z') {
			printf("%c", *(p + i) + diff); // �ҹ��ڷ� ��ȯ (+32)
		}
		else if (*(p + i) >= 'a' && *(p + i) <= 'z') {
			printf("%c", *(p + i) - diff); // �빮�ڷ� ��ȯ (-32)
		}
		else {
			printf("%c", *(p + i)); // �������� �״��  ���
		}
	}
	printf("\n");

	return 0;
}
