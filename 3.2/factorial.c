/*print factrial of given number*/


#include<stdio.h>
int main()
{
    int i,fact,num;
    fact=1;
    printf("enter the value:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    fact=fact*i;
    {
        printf("ans=%d",fact);
    }
    return 0;
}