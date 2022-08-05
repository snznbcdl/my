#include<stdio.h>
#include<assert.h>
void* my_memcpy(void*p1,void*p2,int i)
{
	assert(p1 !=NULL);
	assert(p2 !=NULL);	
	void*ret=p1;
	if(p1<=p2)
	{
		while(i)
		{
			*(char*)p1=*(char*)p2;
			(char*)p1++;
			(char*)p2++;
			i--;
		}
	}
	else if(p1>p2)
	{
		while(i)
		{	
			i--;
			*((char*)p1+i)=*((char*)p2+i);
		}
	}
	return ret;
}

int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	my_memcpy(arr+2,arr,20);
	int i=0;
	for(i=0;i<=9;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
