int frog(int x)
{
	if(x==1)
	{
		return 1;
	}
	else if(x==2)
	{
		return 1;
	}
	if(x>2)
	{
		return frog(x-1)+frog(x-2);
	}
}
