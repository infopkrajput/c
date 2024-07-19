/*
Read a file character by character adn count the character.
*/
#include<stdio.h>
int main()
{
	FILE *p;
	char ch;
	p = fopen("abc.txt","r");
	int nos=0,nonl=0,noc=0,not=0,num = 0;
	while(1)
	{
		ch = fgetc(p);
		if(ch == EOF)
		break;
		if(ch >= 65 && ch<=90  || ch>= 97 && ch<=122)
		noc++;
		if(ch >=49 && ch<=57)
		num++;
		if(ch==' ')
		nos++;
		if(ch == '\n')
		nonl++;
		if(ch == '\t')
		not++;
		printf("%c",ch);
	}
	printf("\n");
	printf("Number of Alphabets = %d\n",noc);
	printf("Number of new line = %d\n",nonl);
	printf("Number of spaces = %d\n",nos);
	printf("Number of tabs = %d\n",not);
	printf("Number of numbers  = %d\n",num);
	fclose(p);
	return 0;
}