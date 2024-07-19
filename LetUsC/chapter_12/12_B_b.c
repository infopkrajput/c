#include<stdio.h>
#define PRODUCT(x) (x*x)
int main()
{
	int i=1,j,k,l;
    printf("%d\n",i);
	j=PRODUCT(i+1);
	k=PRODUCT(i++);
	l=PRODUCT(++i);
	printf("%d\n",j);
	printf("%d\n",k);
	printf("%d\n",l);
	return 0;
} 