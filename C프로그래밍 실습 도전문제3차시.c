#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, max;
	int org1, org2;
	int bit1, bit2;
	int wronginput = 0;

	printf("2 개의 정숫값(범위:2~31)을 입력하세요: ");
	scanf("%d %d", &n1, &n2);

	if (!(n1 >= 2 && n1 <= 31)) {
		printf("첫번째 정숫값(%d)을2~31사이로 입력하세요\n", n1);
		wronginput = 1;
	}

	if (!(n2 >= 2 && n2 <= 31)) {
		printf("두번째 정숫값(%d)을2~31사이로 입력하세요\n", n2);
		wronginput = 1;
	}

	if (wronginput) {
		printf("잘못된 입력으로 프로그램을 종료합니다.\n");
		return -1;
	}

	org1 = n1;
	org2 = n2;

	// 5번째 bit부터 비교시작
	bit1 = n1 >> 4;
	bit2 = n2 >> 4;
	printf("첫번째 5bit: %d, 두번째 5bit: %d\n", bit1, bit2);

	if (bit1 && !bit2)
		max = org1;
	else if (!bit1 && bit2)
		max = org2;
	else if ((bit1 && bit2) || (!bit1 && !bit2)) {
		printf("5번째bit이 %d로 같습니다. 4번째 bit 비교합니다\n", bit1);

		n1 = n1 & 0x0F; // 5번째 bit 0 만들기
		n2 = n2 & 0x0F; // 5번째 bit 0 만들기
		bit1 = n1 >> 3;
		bit2 = n2 >> 3;
		printf("첫번째 4bit: %d, 두번째 4bit: %d\n", bit1, bit2);

		if (bit1 && !bit2)
			max = org1;
		else if (!bit1 && bit2)
			max = org2;
		else if ((bit1 && bit2) || (!bit1 && !bit2)) {
			printf("4번째bit이 %d로 같습니다. 3번째 bit 비교합니다\n", bit1);

			n1 = n1 & 0x07; // 4번째 bit 0 만들기
			n2 = n2 & 0x07; // 4번째 bit 0 만들기
			bit1 = n1 >> 2;
			bit2 = n2 >> 2;
			printf("첫번째 3bit: %d, 두번째 3bit: %d\n", bit1, bit2);

			if (bit1 && !bit2)
				max = org1;
			else if (!bit1 && bit2)
				max = org2;
			else if ((bit1 && bit2) || (!bit1 && !bit2)) {
				printf("3번째bit이 %d로 같습니다. 2번째 bit 비교합니다\n", bit1);


				n1 = n1 & 0x03; // 3번째 bit 0 만들기
				n2 = n2 & 0x03; // 3번째 bit 0 만들기
				bit1 = n1 >> 1;
				bit2 = n2 >> 1;
				printf("첫번째 2bit: %d, 두번째 2bit: %d\n", bit1, bit2);

				if (bit1 && !bit2)
					max = org1;
				else if (!bit1 && bit2)
					max = org2;
				else if ((bit1 && bit2) || (!bit1 && !bit2)) {
					printf("2번째bit이 %d로 같습니다. 1번째 bit 비교합니다\n", bit1);

					n1 = n1 & 0x01; // 2번째 bit 0 만들기
					n2 = n2 & 0x01; // 2번째 bit 0 만들기
					bit1 = n1;
					bit2 = n2;
					printf("첫번째 1bit: %d, 두번째 1bit: %d\n", bit1, bit2);

					if (bit1 && !bit2)
						max = org1;
					else if (!bit1 && bit2)
						max = org2;
					else if ((bit1 && bit2) || (!bit1 && !bit2)) {
						printf("1번째bit이 %d로 같습니다. 모든비트가 같습니다. 서로 같은수 %d입니다\n", bit1, org1);
						return 0;
					}

				}
			}
		}
	}

	printf("첫번째 정숫값: %d, 두번째 정수값: %d\n", org1, org2);

	printf(">>더 큰 숫자: %d\n", max);

	return 0;
}
