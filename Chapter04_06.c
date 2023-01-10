#include<stdio.h>

int main()
{
	char first[10];
	char last[20];

	printf(" ¿Ã∏ß :");
	scanf("%s %s", &first, &last);
	printf("%s %s\n", first, last);
	printf("%*d %*d\n", strlen(first), strlen(first), strlen(last),  strlen(last));

	printf("%s %s\n", first, last);
	printf("%-*d %-*d", strlen(first), strlen(first), strlen(last), strlen(last));

}