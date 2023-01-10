#include<stdio.h>

int main()
{
	char name[20];

	printf("¿Ã∏ß : ");
	scanf("%s", &name);

	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("%*s\n", sizeof(name) + 3, name);

}