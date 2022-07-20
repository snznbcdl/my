#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6};
	int(*p)[6]=&arr;//元素个数为6，类型为int
	return 0;
	char arr1[4];
	char*(*pa)[4]=&arr1;
} 
//int* p1[6],为指针数组，数组p1中含有6个元素，元素类型为int*
