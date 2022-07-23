#include<stdio.h>

int cmp_int(void*e1,void*e2)
{
	return *(int*)e1-*(int*)e2;
}

void Swap(char*p1,char*p2,int width)
{
	int i=0;
	for(i=0;i<width;i++)
	{
		char tmp=*p1;
		*p1=*p2;
		*p2=tmp;
		p1++;
		p2++;
	}
}

void bubble_sort(void*base,int sz,int width,int(*cmp)(void*e1,void*e2))
{
	int i=0;
	for(i=0;i<sz-1;i++)
	{
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
			}
		}
	}
}


void test1()
{
	int arr1[]={9,8,7,6,5,4,3,2,1};
	int sz=sizeof(arr1)/sizeof(arr1[0]);
	bubble_sort(arr1,sz,sizeof(arr1[0]),cmp_int);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr1[i]);
	}
}

int cmp_float(void*p1,void*p2)
{
	if(*(float*)p1 > *(float*)p2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void test2()
{
	float fl[]={3.0,4.0,9.0,1.0,2.0};
	bubble_sort(fl,5,sizeof(fl[0]),cmp_float);
	int i=0;
	for(i=0;i<5;i++)
	{
		printf("%f ",fl[i]);
	}
}
int main()
{
	test1();
	test2();
	return 0;
}
