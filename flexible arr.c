#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct S
	{
		int a;
		int arr[];
	};
    struct S*ps=(struct S*)malloc(sizeof(int)+5*sizeof(int));
	ps->a=100;
	int i=0;
	for(i=0;i<5;i++)
	{
		ps->arr[i]=i;
	}
	printf("%d\n",ps->a);
	for(i=0;i<5;i++)
	{
		printf("%d ",ps->arr[i]);
	}
	free(ps);
	ps=NULL;
	return 0;
}
