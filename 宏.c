#include<stdio.h>
#define DOUBLE(x) x+x//((x)+(x))��Ҫ��������
int main()
{
	int a=10;
	int ret=DOUBLE(a);
	printf("%d\n",ret);
	printf("hello" "world\n");
	return 0;
}
