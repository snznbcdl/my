#include<stdio.h>

char* my_strstr(char* arr1,char* arr2)
{
	char*p1=arr1;
	char*p2=arr2;
	char*cou=arr1;
	while(p1)
	{
		p1=cou;
		p2=arr2;
		while(*p1 && *p2 &&(*p1==*p2))
		{
			p1++;
			p2++;
		}
		if(*p2=='\0')
		{
			return cou;
		}
		cou++;
	}
	return NULL;
}

int main ()
{
	char* arr1="abbbbc";
	char* arr2="bc";
	char* ret =my_strstr(arr1,arr2);
	if(ret==NULL)
	{
		printf("No");
	}
	else
	{
		printf("%s\n",ret);	
	}
	return 0;
}
