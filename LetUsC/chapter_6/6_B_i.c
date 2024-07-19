/*
Write a program to produce the following output:
     1
    2 3
   4 5 6
  7 8 9 10
*/
#include<stdio.h>
int main()
{
int i,j,num=1,space,term,temp;
printf("Enter the term = ");
scanf("%d",&term);
temp=term;
for(i=1;i<=term;i++)
{
  for(space=temp;space>=1;space--)
  {
    printf(" ");
  }
  temp--;
  for(j=1;j<=i;j++)
  {
    printf("%d ",num);
    num++;
  }
  printf("\n");
} 
  return 0;
}