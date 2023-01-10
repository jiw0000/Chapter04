#include<stdio.h>

int main()
{
	float bit;

	printf(" 메가비트 : ");
	scanf("%f", &bit);
	printf("초당 %.2f 메가비트, %.2f 메가비이트 파일을\n%.2f초에 다운로드 된다", bit, bit/8, bit / 106);
}