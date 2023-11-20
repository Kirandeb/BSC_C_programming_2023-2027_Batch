#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("before abort");
	abort();
	printf("After abort");
	return 0;
}
