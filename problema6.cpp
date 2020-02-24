#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	FILE *pf; 
	int a, e, i, o, u;
	a = 0; e = 0; i = 0; o = 0; u = 0;
	pf = fopen("D:\\abcd.txt", "r");
	char c;
	if (pf == NULL)
	{
		printf("Eroare");
		exit(1);
	}
	c = fgetc(pf);
	while (c != EOF)
	{
		if (strchr("a", c) != 0)a++;
		if (strchr("e", c) != 0)e++;
		if (strchr("i", c) != 0)i++;
		if (strchr("o", c) != 0)o++;
		if (strchr("u", c) != 0)u++;
		c = fgetc(pf);
	}
	printf("Vocala a apare de %d ori\n", a);
	printf("Vocala e apare de %d ori\n", e);
	printf("Vocala i apare de %d ori\n", i);
	printf("Vocala o apare de %d ori\n", o);
	printf("Vocala u apare de %d ori", u);
	fclose(pf);
	getchar();


}
