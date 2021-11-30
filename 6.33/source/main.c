#include<stdio.h>
#include<stdlib.h>
#define SIZE 15

size_t binarySearch(const int b[], int searchkey, size_t low, size_t high);
void printHeader(void);
void printRow(const int b[], int low, int mid, int high);

int main(void)
{
	int a[SIZE];
	int key;

	for (size_t i = 0; i < SIZE; ++i)
	{
		a[i] = 2 * i;
	}

	printf("Enter a number between 0 and 28: ");
	scanf_s("%d", &key);

	printHeader();

	size_t result = binarySearch(a, key, 0, SIZE - 1);

	if (result != -1)
	{
		printf("\n%d found at index %d\n", key, result);
	}
	else
	{
		printf("\n%d not found\n", key);
	}

	system("pause");
	return 0;
}

size_t binarySearch(const int b[], int searchkey, size_t low, size_t high)
{
	
	if (low >= high)
	{
		return -1;
	}
	else
	{
		size_t middle = (low + high) / 2;
		printRow(b, low, middle, high);
		printf("\n");
		if (searchkey == b[middle])
		{
			return middle;
		}
		else if (searchkey < b[middle])
		{
			binarySearch(b, searchkey, low, middle - 1);
		}
		else
		{
			binarySearch(b, searchkey, middle + 1,high);
		}
	}
}

void printHeader(void)
{
	puts("\n°}¦C¦ì¸m");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%4d", i);
	}
	printf("\n");
	for (int i = 0; i < 4*SIZE; i++)
	{
		printf("-");
	}
	printf("\n");
}

void printRow(const int b[], int low, int mid, int high)
{
	int f;
	f = 0;
	for (int i = 0; i < SIZE; i++)
	{
		
		if (i<low || i >high)
		{
			return -1;
		}
		else if(i ==mid)
		{
			printf("%4d*", b[i]);
			f = 1;
		}
		else
		{
			if (f == 1)
			{
				printf("%3d", b[i]);
				f = 0;
			}
			else
			{
				printf("%4d", b[i]);
			}
			
		}
	}
	printf("\n");
}
