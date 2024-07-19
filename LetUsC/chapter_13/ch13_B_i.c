/*
The x and y coordinates of 10 different points are entered through the keyboard. Write a program to find the distance of last point from the first point (sum of distances between consecutive points.)
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("How many coordinates points do you want to enter = ");
    scanf("%d",&n);
    int x[n],y[n],i;
    float distance=0,tot_dist=0;
    printf("Enter 1 coordinate points = ");
    scanf("%d %d",&x[0],&y[0]);
    for(i=1;i<n;i++)
    {
        printf("Enter %d coordinate points = ",i+1);
        scanf("%d %d",&x[i],&y[i]);
    }
    // for(i=0;i<10;i++)
    // {
    //     printf("%d %d\n",x[i],y[i]);
    // }
    for(i=1;i<n;i++)
    {
        distance = sqrt(pow(x[i]-x[i-1],2)+pow(y[i]-y[i-1],2));
        printf("distance from (x%d,y%d) to (x%d,y%d) is %f \n",i,i,i+1,i+1,distance);
        tot_dist = tot_dist + distance;
    }
    printf("Total distance (x1,y1) to (x%d,y%d) is %f ",n,n,tot_dist);
    return 0;
}