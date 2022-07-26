#include<stdio.h>
#include<string.h>
int judgef(char*arr1,char*arr2)
{
	strncat(arr1,arr1,6);
	char*p=strstr(arr1,arr2);
	if(p==NULL)
	{
		return 0;
	}
	return 1;
}
int main()
{
	char arr1[20]="abcdef";
	char arr2[]="bcdefaa";
	int ret=judgef(arr1,arr2);
	if(ret==0)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
	return 0;
}
