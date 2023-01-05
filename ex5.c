#include<stdio.h>
int main()
{
	//º¯¼ö ¼±¾ð
	int opt;
	double num1, num2;
	double result;
	
	printf("<1>µ¡¼À <2>»¬¼À <3>°ö¼À <4>³ª´°¼À Áß °í¸£½Ã¿À.");
	scanf("%d", &opt);
	printf("µÎ ¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À.");
	scanf("%f %f", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	else if (opt == 2)
		result = num1 - num2;
	else if (opt == 3)
		result = num1 * num2;
	else
		result = num1 / num2;

	//Ãâ·Â
	printf("°á°ú´Â %fÀÔ´Ï´Ù", result);
	return 0;
}