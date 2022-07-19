#include<stdio.h>

int hannort(int i)
{
	if(i==1)
	{
		return 1;
	}
	if(i>1)
	{
		return hannort(i-1)*2+1;
	}
}

int main()
{
	int floor=0;
	scanf("%d",&floor);
	int ret=hannort(floor);
	printf("%d",ret);
	return 0;
}
