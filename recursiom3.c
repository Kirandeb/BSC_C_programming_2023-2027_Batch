#include<stdio.h>
int power(int, int);
int main()
{
	int x;
	x=power(4,10);
	printf("The value of x = %d",x);
	return 0;
}
int power(int n, int p)
{
	if(p==0)
		return 1;
	else
		return n * power(n,p-1);
}
