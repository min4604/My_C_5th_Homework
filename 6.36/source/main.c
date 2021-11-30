#include<stdio.h>
#include<stdlib.h>

void reverser(char str[]);

int main(void)
{
	char str[50];
	printf("輸入一串英文:");
	scanf_s("%s", str, sizeof(str));
	reverser(str);
	system("pause");
	return 0;
}

void reverser(char *x)
{
	if (*x!='\0')
	{
		reverser(x + 1);
		printf("%c", *x);
	}
}
