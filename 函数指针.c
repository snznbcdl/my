#include<stdio.h>
#include<windows.h>

void my_shutdown()
{
	system("shutdown -s -t 60");
}

int main()
{
	void (*p)()=&my_shutdown;
	(*p)();
	while(1)
	{
		printf("请注意，你的电脑将在60s内关机\n");
		printf("输入‘我是猪’以停止程序");
		char arr[20]={0};
		scanf("%s",&arr);
		if(strcmp(arr,"我是猪")==0)
		{
			system("shutdown -a");
			break;
		}
	}
	
	
	return 0;
}
