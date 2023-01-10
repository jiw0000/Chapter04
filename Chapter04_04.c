#include<stdio.h>

int main()
{
	float height;
	char name[40];

	printf(" 인치 단위 키 : ");
	scanf("%f", &height);
	printf(" 이름 : ");
	scanf("%s", &name);

	printf("%s 씨, 당신의 키는 %.3f 피트입니다", name, height/12.0);
}