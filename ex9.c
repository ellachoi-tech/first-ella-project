#include <stdio.h>
int main()
{
	int score;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &score);

	if (score >= 0 && score <= 100) {
		if (score >= 70)
			printf("PASS!\n");
		else {
			printf("FAIL!\n");
		}
	}
	else
		printf("�߸��� �Է��Դϴ�.\n");

	return 0;
}