#include<stdio.h>
//��Ŀ���ŵ����⣺��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�
//С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣�

int rabbit(int num)
{
	if(num==1)
	{
		return 1;
	}
	else if(num==2)
	{
		return 1;
	}
	else
	{
		return rabbit(num-1)+rabbit(num-2);
	}
}
int main()
{
	int num=0;
	scanf("%d",&num);
	int ret=rabbit(num);
	printf("%d\n",ret);
	return 0;
}
