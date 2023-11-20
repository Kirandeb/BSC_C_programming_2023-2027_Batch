#include<stdio.h>
// Euclidian Method
int GCD(int a,int b)
{
	if(b==0)
		return a;
	else
		return GCD(b,a%b);
}
int main()
{
	int x;
	x=GCD(169,13);
	printf("The GCD value is %d ",x);
	return 0;
}
