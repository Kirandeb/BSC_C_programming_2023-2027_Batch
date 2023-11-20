#include<stdio.h>
int sum(int n)
{
	if (n<10)
		return n;
	else
	return (n%10) + sum(n/10);
}
int main()
{
	int x;
	x=sum(1234);
	printf("the value of X = %d",x);
	return 0;
}
