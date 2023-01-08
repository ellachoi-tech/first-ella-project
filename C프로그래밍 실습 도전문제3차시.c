#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, max;
	int org1, org2;
	int bit1, bit2;
	int wronginput = 0;

	printf("2 ���� ������(����:2~31)�� �Է��ϼ���: ");
	scanf("%d %d", &n1, &n2);

	if (!(n1 >= 2 && n1 <= 31)) {
		printf("ù��° ������(%d)��2~31���̷� �Է��ϼ���\n", n1);
		wronginput = 1;
	}

	if (!(n2 >= 2 && n2 <= 31)) {
		printf("�ι�° ������(%d)��2~31���̷� �Է��ϼ���\n", n2);
		wronginput = 1;
	}

	if (wronginput) {
		printf("�߸��� �Է����� ���α׷��� �����մϴ�.\n");
		return -1;
	}

	org1 = n1;
	org2 = n2;

	// 5��° bit���� �񱳽���
	bit1 = n1 >> 4;
	bit2 = n2 >> 4;
	printf("ù��° 5bit: %d, �ι�° 5bit: %d\n", bit1, bit2);

	if (bit1 && !bit2)
		max = org1;
	else if (!bit1 && bit2)
		max = org2;
	else if ((bit1 && bit2) || (!bit1 && !bit2)) {
		printf("5��°bit�� %d�� �����ϴ�. 4��° bit ���մϴ�\n", bit1);

		n1 = n1 & 0x0F; // 5��° bit 0 �����
		n2 = n2 & 0x0F; // 5��° bit 0 �����
		bit1 = n1 >> 3;
		bit2 = n2 >> 3;
		printf("ù��° 4bit: %d, �ι�° 4bit: %d\n", bit1, bit2);

		if (bit1 && !bit2)
			max = org1;
		else if (!bit1 && bit2)
			max = org2;
		else if ((bit1 && bit2) || (!bit1 && !bit2)) {
			printf("4��°bit�� %d�� �����ϴ�. 3��° bit ���մϴ�\n", bit1);

			n1 = n1 & 0x07; // 4��° bit 0 �����
			n2 = n2 & 0x07; // 4��° bit 0 �����
			bit1 = n1 >> 2;
			bit2 = n2 >> 2;
			printf("ù��° 3bit: %d, �ι�° 3bit: %d\n", bit1, bit2);

			if (bit1 && !bit2)
				max = org1;
			else if (!bit1 && bit2)
				max = org2;
			else if ((bit1 && bit2) || (!bit1 && !bit2)) {
				printf("3��°bit�� %d�� �����ϴ�. 2��° bit ���մϴ�\n", bit1);


				n1 = n1 & 0x03; // 3��° bit 0 �����
				n2 = n2 & 0x03; // 3��° bit 0 �����
				bit1 = n1 >> 1;
				bit2 = n2 >> 1;
				printf("ù��° 2bit: %d, �ι�° 2bit: %d\n", bit1, bit2);

				if (bit1 && !bit2)
					max = org1;
				else if (!bit1 && bit2)
					max = org2;
				else if ((bit1 && bit2) || (!bit1 && !bit2)) {
					printf("2��°bit�� %d�� �����ϴ�. 1��° bit ���մϴ�\n", bit1);

					n1 = n1 & 0x01; // 2��° bit 0 �����
					n2 = n2 & 0x01; // 2��° bit 0 �����
					bit1 = n1;
					bit2 = n2;
					printf("ù��° 1bit: %d, �ι�° 1bit: %d\n", bit1, bit2);

					if (bit1 && !bit2)
						max = org1;
					else if (!bit1 && bit2)
						max = org2;
					else if ((bit1 && bit2) || (!bit1 && !bit2)) {
						printf("1��°bit�� %d�� �����ϴ�. ����Ʈ�� �����ϴ�. ���� ������ %d�Դϴ�\n", bit1, org1);
						return 0;
					}

				}
			}
		}
	}

	printf("ù��° ������: %d, �ι�° ������: %d\n", org1, org2);

	printf(">>�� ū ����: %d\n", max);

	return 0;
}
