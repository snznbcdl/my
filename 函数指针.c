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
		printf("��ע�⣬��ĵ��Խ���60s�ڹػ�\n");
		printf("���롮��������ֹͣ����");
		char arr[20]={0};
		scanf("%s",&arr);
		if(strcmp(arr,"������")==0)
		{
			system("shutdown -a");
			break;
		}
	}
	
	
	return 0;
}
