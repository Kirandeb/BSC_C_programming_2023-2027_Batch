// strcmp() function in C programming 
/*
	similar = return 0;
	negative = -1;
	positive = 1;

*/
#include <stdio.h>
#include <string.h>

void main() {
	char a[]="Kiran";
	char b[]="Kiran";
	char c[]="kiran";
	printf("%d\n",strcmp(a,b)); //0
	printf("%d\n",strcmp(a,c)); //-1
	printf("%d\n",strcmp(c,a)); //1
}

