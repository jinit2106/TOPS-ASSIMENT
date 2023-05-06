/*find max number fo given number*/

#include<stdio.h>
int main()
{
    int num,rem,large=0;
    printf("enter number:");
    scanf("%d",&num);
    if(num>0)
    {
       rem=num%10;
       if(rem>large)
       {
        large=rem;
       }
       if(num=num/10)
       {
        printf("%d is largest",rem);
       }
    }
    return 0;
}