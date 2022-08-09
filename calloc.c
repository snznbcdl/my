#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
int main()
{
	int* p=(int*)calloc(10,sizeof(int));
	int i=0;
    if(p==NULL)
    {
		printf("%s\n",strerror(errno));
	}
	else
	{
		for(i=0;i<10;i++)
		{
			printf("%d\n",*(p+i));
		}
	}
	free(p);
	p=NULL;
	return 0;
}
