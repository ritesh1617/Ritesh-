#include<stdio.h>
int getfactorial(int x)
{
	if(x>1)
	{
		return x* getfactorial(x-1);
	}
}
main()
{
	printf("\n%d",getfactorial(5));
}