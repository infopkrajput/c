#include <stdio.h>
#include<math.h>
double Distance(double,double,double,double);
double Area(double,double,double);
int main()
{
    double a,b,c,areaOfTriangle;
    double x1,y1,x2,y2,x3,y3,x,y;
    printf("Enter the points of X1 and y1 : ");
    scanf("%lf%lf",&x1,&y1);
    printf("Enter the points of X2 and y2 : ");
    scanf("%lf%lf",&x2,&y2);
    printf("Enter the points of X3 and y3 : ");
    scanf("%lf%lf",&x3,&y3);
    a = Distance(x1,y1,x2,y2);
    b = Distance(x2,y2,x3,y3);
    c = Distance(x3,y3,x1,y1);
    areaOfTriangle = Area(a,b,c);
    double s1,s2,s3,a1,a2,a3;
    printf("Enter the point to check if it lies inside or not : ");
    scanf("%lf%lf",&x,&y);
    s1 = Distance(x1,y1,x,y);
    s2 = Distance(x2,y2,x,y);
    s3 = Distance(x1,y1,x2,y2);
    a1 = Area(s1,s2,s3);
    s1 = Distance(x3,y3,x,y);
    s2 = Distance(x1,y1,x3,y3);
    s3 = Distance(x1,y1,x,y);
    a2 = Area(s1,s2,s3);
    s1 = Distance(x2,y2,x,y);
    s2 = Distance(x3,y3,x2,y2);
    s3 = Distance(x3,y3,x,y);
    a3 = Area(s1,s2,s3);
    // printf("Area 1 = %lf\nArea 2 = %lf\nArea 3 = %lf\n",a1,a2,a3);
    // printf("Sum of all area = %lf\n",a1+a2+a3);
    printf("Area of triangle = %lf\n",areaOfTriangle);
    if(a1+a2+a3 - areaOfTriangle < 0.00001)
    {
        printf("The point (%lf,%lf) lies inside the triangle.\n",x,y);
    }
    else
    {
        printf("The point (%lf,%lf) does not lie inside the triangle.\n",x,y);
    }
    return 0;
}
double Distance(double a1,double b1,double a2 ,double b2)
{
    double dis;
    dis = sqrt(pow((a2-a1),2)+pow((b2-b1),2));
    return dis;
}
double Area(double a,double b,double c)
{
    float s = (a+b+c)/2;
    float ar = sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}