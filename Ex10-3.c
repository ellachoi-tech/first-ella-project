/* ========================================================================
 * 파일명 : exercise3.c
 * ----------------------------------------
 * 학부 : 이화여자대학교
 *		  휴먼기계바이오공학부
 * 학번 : 2270090
 * 성명 : 최희나 (ellachoi@ewhain.net)
 * 설명 :
 *		코드의 잘못된 부분을 수정하세요
 * 이력 :
 *		2022-11-16 : 최초 작성 (최희나)
 * ====================================================================== */
#define _CRT_SECURE_NO_WARNINGS  // for visual studio
#include <stdio.h>

int main()
{
	int num = 5, copy;

	int* p_num;

	copy = num;

	// p_num = num; 잘못된 부분: 주소를 넣어야 함.
	p_num = &num; // 수정된 부분: num의주소를 포인터변수 p_num에 대입

	// printf("참조값 = %d\n", p_num);  잘못된 부분: 주소에 해당하는 값을 출력하면 *p_num사용
	printf("참조값 = %d\n", *p_num); // 수정된 부분: *p_num 사용
	
	// 만약 주소값 자체를 찍을려면 %d로 찍으면 경우에 따라 마이너스 값 나옴
	printf("참조값(주소값) = %p\n", p_num); // 수정된 부분: 주소값은 %p로 16진수로 출력



	return 0;
}
