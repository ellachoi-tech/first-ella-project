#include <stdio.h>
#define PRICE 20000
int main()
{
	//���� if �� �����ϱ�
	int age, pay;
	
	printf("���̸� �Է��Ͻÿ� : ");
	scanf("%d", &age);

	if (age < 8) {
		pay = 0;
	}
	else if (age >= 8 && age < 60) {
		pay = PRICE;
	}
	else {
		pay = (int) PRICE * 0.5;
	}

	printf("����� : %d", pay);

	return 0;
}