/* The marks obtained by a student in 5 different subjects are input through the keyboard. The student gets a division as per the following rule:
--Percentage above or equal to 60 - First division
--Percentage between 50 and 59 – Second division
--Percentage between 40 and 49 – Third division
--Percentage less than 40 – Fail
Write a program to calculate the division obtained by the student. */
#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,per;
    printf("Enter marks in five subjects \n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)*100/500;
    printf("Percentages of student = %d\n",per);
    if(per>=60)
    printf("First division ");
    if((per>=50)&&(per<60))
    printf("Second division");
    if((per>=40)&&(per<50))
    printf("Third division");
    if(per<40)
    printf("Fail");        
    return 0;
}
/*
#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,tot;
    float per;
    printf("Enter The marks - ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    tot=m1+m2+m3+m4+m5;
    per=tot*100/500;
    printf("Total percentage %f\n",per);
    if(per>=60)
    printf("First Division");
    if(per>=50) 
    printf("Second Division");
    if(per>=40)
    printf("Third Division");
    else
    printf("fail");
    return 0;
}
*/