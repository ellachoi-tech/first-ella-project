#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c;

	printf("���ĺ��� �Է��ϼ���: ");
	scanf("%c", &c);

	if (c >= 'A' && c <= 'Z') {
		printf("�빮�� %c �Դϴ�!\n", c);
	}
	else if (c >= 'a' && c <= 'z') {
		printf("�ҹ��� %c �Դϴ�!\n", c);
	}
	else {
		printf("�߸��� �Է� %c �Դϴ�!\n", c);
	}

	return 0;

}
