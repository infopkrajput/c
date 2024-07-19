/* 
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89,
By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

*/
#include<stdio.h>
int fiboSum(int term);
int main()
{
    int sum, term;
    term = 4000000;
    sum = fiboSum(term);
    printf("%d\n",sum);  
    return 0;
}

int fiboSum(int term)
{
    int a=1,b=2,c=b,sum=0;
    while(c<=term)
    {
        if(c%2==0)
        {
            sum=sum+c;
        }
        c=a+b;
        a=b;
        b=c;
    }
    return sum;
}
