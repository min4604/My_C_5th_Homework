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

void reverser(char str[])
{
	int i=0,j;
	while (str[i] != '\0')
	{
		i++;
	}
	for (j = i-1; j >= 0; j--)
	{
		printf("%c", str[j]);
	}
	printf("\n");
}