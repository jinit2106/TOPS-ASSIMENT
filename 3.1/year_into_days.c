/*wap to convert year into day and day into year*/


#include<stdio.h>
int main()
{
    int year;
    float days,years;
    printf("enter days:");
    scanf("%f",&days);
    printf("enter year:");
    scanf("%d",&year);
    years=days/365;/*defination*/
    days=year*365;
    printf("%.2f years \n%.0f days\n",years,days);/*"%.2f"get ans in 2 point*/

    
    return 0;
}