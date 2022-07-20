#include<stdio.h>
int main ()
{
	char ch[]="abcdef";
	char* pch=ch;
	printf("%s\n",ch);
	printf("%s\n",pch);
	printf("%c\n",*pch);
	*pch='w';
	printf("%s\n",pch);
	return 0;
}
