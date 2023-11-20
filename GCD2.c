#include<stdio.h>
int GCD(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		{
			return gcd(a-b,b);
		}
		else
		{
			return gcd(a,b-a);
		}
	}
	return a;
}
int main()
{
	int x;
	x=GCD(10,14);
	printf("The GCD value is %d ",x);
	return 0;
}
