#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6};
	int(*p)[6]=&arr;//Ԫ�ظ���Ϊ6������Ϊint
	return 0;
	char arr1[4];
	char*(*pa)[4]=&arr1;
} 
//int* p1[6],Ϊָ�����飬����p1�к���6��Ԫ�أ�Ԫ������Ϊint*
