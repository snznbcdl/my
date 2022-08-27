#include<stdio.h>
//题目：古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，
//小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？

int rabbit(int num)
{
	if(num==1)
	{
		return 1;
	}
	else if(num==2)
	{
		return 1;
	}
	else
	{
		return rabbit(num-1)+rabbit(num-2);
	}
}
int main()
{
	int num=0;
	scanf("%d",&num);
	int ret=rabbit(num);
	printf("%d\n",ret);
	return 0;
}
