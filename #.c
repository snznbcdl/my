#include<stdio.h>
#define PRINT(x) printf("the value of "#x" is %d\n",x)//#x=="x"   x不会被替换成数值
int main()
{
	int a=10;
	int b=20;
	printf("she##ll");
	PRINT(a);
	PRINT(b);
	return 0;
}
