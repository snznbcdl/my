#include<stdio.h>
/*int main()
{
	int arr[]={1,2,3,4,5,6};
	int(*p)[6]=&arr;//元素个数为6，类型为int
	return 0;
	char arr1[4];
	char*(*pa)[4]=&arr1;
} */
//int* p1[6],为指针数组，数组p1中含有6个元素，元素类型为int*

void Print(int(*p)[3],int x,int y)
{
	int i=0;
	for(i=0;i<x;i++)
	{
		int j=0;
		for(j=0;j<y;j++)
		{
			printf("%d ",*(*(p+i)+j));
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	Print(arr,3,3);
	return 0;
}
//int(*parr[10])[5];?
