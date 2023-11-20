#include<stdio.h>
void star_print(int n)
{
	if(n<1)
		return;
	else
	{
		printf("* ");
		star_print(n-1);
	}
}
int main()
{
	star_print(5);
	return 0;
}
