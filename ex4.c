#include <stdio.h>
int main()
{
	/*성적을 입력 받아 학점을 결정하는 프로그램
	90점 이상이라면 A,80점이상이라면 B,70점이상이라면 C,60점이상 D,나머지F*/
	//변수선언
	int score;
	char grade;
	//입력
	printf("성적을 입력하시오 : ");
	scanf("%d", &score);
	//출력
	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';
	//출력
	printf("성적 %d에 대한 학점은 %c입니다.", score, grade);

	return 0;
}