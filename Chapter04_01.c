#include<stdio.h>

void main()
{
	char first[10];
	char last[20];

	printf("�̸� : ");
	scanf("%s", &last);

	printf("�� : ");
	scanf("%s", &first);

	printf(" %s%s", first, last);

	return 0;
}