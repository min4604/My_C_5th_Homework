#include<stdio.h>
#include<stdlib.h>
#define SIZE 8
int recursiveMaximum(int a[] ,int size);

int main(void)
{
	int max;
	int x[SIZE];
	char a ='1';
	printf("請輸入8個數字:");
	scanf_s("%d %d %d %d %d %d %d %d", &x[0], &x[1], &x[2], &x[3], &x[4], &x[5], &x[6], &x[7]);
	max = recursiveMaximum(x, SIZE);
	printf("%d為數列中最大值\n",max);


	system("pause");
	return 0;
}

int recursiveMaximum(int a[], int size)
{
	if (size == 0)
	{
		return a[0];
	}
	else
	{
		if (a[size] > recursiveMaximum(a, size - 1))
		{
			return a[size];
		}
		else
		{
		    recursiveMaximum(a, size - 1);
		}
		
	}
}