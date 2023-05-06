/*find simple intrest*/


#include<stdio.h>
int main()
{
    int value,rate,intrest;
    printf("enter your value:");
    scanf("%d",&value);
    printf("enter the rate:");
    scanf("%d",&rate);
    intrest=value*rate/100;
    printf("intrest:%d",intrest);
    return 0;
}