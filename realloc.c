#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p1=(int*)malloc(5*sizeof(int));
	int i=0;
	for(i=0;i<5;i++)
	{
		*(p1+i)=i;
	}
	int*p2=realloc(p1,40);
	int j=0;
	for(j=0;j<10;j++)
	{
		printf("%d ",*(p2+j));
	}
	return 0;
}
