#include<stdio.h>

void menu()
{
	printf("#########################\n");
	printf("### 1:add      2:sub ####\n");
	printf("### 3:mul      3:div ####\n");
	printf("###      0:exit      ####\n");
	printf("#########################\n");
}

int Add(int x,int y)
{
	return x+y;
}
int Sub(int x,int y)
{
	return x-y;
}

int Mul(int x,int y)
{
	return x*y;
}

int Div(int x,int y)
{
	return x/y;
}

int main()
{
	int input;
	int a;
	int b;
	int(*parr[5])(int,int)={0,Add,Sub,Mul,Div};
	do
	{
		menu();
		printf("choose");
		scanf("%d",&input);
		if(input>=1 &&input<=5)
		{
			printf("input two number");
			scanf("%d%d",&a,&b);
			int ret=parr[input](a,b);
			printf("%d\n",ret);
		}
		else if (input==0)
		{
			printf("exit");
			break;
		}
		else
		{
			printf("err");
		}
	}while(input);
	return 0;
}
