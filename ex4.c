#include <stdio.h>
int main()
{
	/*������ �Է� �޾� ������ �����ϴ� ���α׷�
	90�� �̻��̶�� A,80���̻��̶�� B,70���̻��̶�� C,60���̻� D,������F*/
	//��������
	int score;
	char grade;
	//�Է�
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &score);
	//���
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
	//���
	printf("���� %d�� ���� ������ %c�Դϴ�.", score, grade);

	return 0;
}