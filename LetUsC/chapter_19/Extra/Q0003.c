/*

sprintf

sscanf

use of s sscanf and sprintf

*/
#include<stdio.h>
#include<string.h>
int main()
{
	int a = 5;
	float b = 3.6;
	char c = 'r';
	char str[20];
	printf("%d %f %c\n",a,b,c);
	sprintf(str,"This is my %d %f %c\n",a,b,c);
	printf("%s\n",str);
	int x;
	float y;
	char z;
	sscanf(str,"This is my %d %f %c",&x,&y,&z);
	printf("%d %f %c\n",x,y,z);
	return 0;
}
