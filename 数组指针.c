#include<stdio.h>
/*int main()
{
	int arr[]={1,2,3,4,5,6};
	int(*p)[6]=&arr;//Ԫ�ظ���Ϊ6������Ϊint
	return 0;
	char arr1[4];
	char*(*pa)[4]=&arr1;
} */
//int* p1[6],Ϊָ�����飬����p1�к���6��Ԫ�أ�Ԫ������Ϊint*

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
