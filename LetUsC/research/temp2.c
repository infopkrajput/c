#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *p;
    struct emp
    {
        char name[20];
        int age;
        float salary;
    };
    struct emp y;
    int n;
    while(1)
    {
    printf("\nchoose the option :\n");    
    printf("1.Enter the data  :\n");
    printf("2.Read the data   :\n");
    printf("3.Append the data :\n");
    printf("4.Exit Program    :\n");
    printf("==> ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    getchar();
         printf("Enter the name : ");
         gets(y.name);
         printf("Enter the age :");
         scanf("%d",&y.age);
         printf("Enter the salary :");
         scanf("%f",&y.salary);
         p= fopen("Employee.txt","a");
         fprintf(p,"%s %d %f\n",y.name,y.age,y.salary);
         fclose(p);      
    break;
    case 2:
          p=fopen("Employee.txt","r");
          while(fscanf(p,"%s %d %f",y.name,&y.age,&y.salary)!=EOF){
            printf("Name : %s\n",y.name);
            printf("Age : %d\n",y.age);
            printf("Salary : %f\n",y.salary);
          }
         fclose(p);
    break;
    case 3:
    break;
    case 4:
        exit(1);
    break;
    default:
    printf("Please select the  correct number :  ");
    break;
    }
    }
    return 0;
}