#include<stdio.h>

int main()
{
	float height;
	char name[40];

	printf(" ��ġ ���� Ű : ");
	scanf("%f", &height);
	printf(" �̸� : ");
	scanf("%s", &name);

	printf("%s ��, ����� Ű�� %.3f ��Ʈ�Դϴ�", name, height/12.0);
}