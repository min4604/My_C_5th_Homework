#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(void)
{
	int com[11] = { 0 };
	float com1[11] = { 0 };
	int as, bs,all,times;
	srand(time(0));
	
	for (times = 0; times < 36000; times++)
	{
		as = rand() % 6 + 1;
		bs = rand() % 6 + 1;
		all = as + bs;
		com[all - 2]++;
	}
	printf("%7d%7d%7d%7d%7d%7d%7d%7d%7d%7d%7d\n",2,3,4,5,6,7,8,9,10,11,12);
	all = 0;
	for (times = 0; times < 11; times++)
	{
		printf("%7d",com[times]);
		all += com[times];
	}
	printf("\n實際機率\n");
	for (times = 0; times < 11; times++)
	{
		printf("%7.3f", (float)com[times]/36000);
	}
	printf("\n計算機率\n");
	for (times = 1; times < 7; times++)
	{
		com1[times - 1] = (float)times / 36;
	}
	for (times = 5; times >0; times--)
	{
		com1[11-times] = (float)times / 36;
	}
	for (times = 0; times <11; times++)
	{
		printf("%7.3f", com1[times]);
	}
	printf("\n");
	for (times = 0; times < 11; times++)
	{
		if ((abs(com1[times] - (float)com[times] / 36000)) < 0.01)
		{
			printf("%2d的機率合理\n", times + 2);
		}
		
	}
	system("pause");
	return 0;
}