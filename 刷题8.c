#include<stdio.h>
int main()
{
	int i=0;
	scanf("%d",&i);
	int j;
	int time=0;
    for(time=0;time<=i;time++)
    {
		for(j=2;j<=i;j++)
		{
			int del1=i/j;
			float del=(float)i/(float)j;
			if(del==del1)
			{
				i=i/j;
				printf("%d*",j);
				break;
			}
		}
	}
	return 0;
}
