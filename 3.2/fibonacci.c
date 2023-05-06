/*printf fibonacci series of given number*/
#include<stdio.h>
int main()
{
    int n,a=0,b=1,temp;
    printf("enter value:");
    scanf("%d",&n);
    printf("%d\n",a);
    printf("%d\n",b);
    for(int i=0;i<n-2;i++)
    {
        temp=a+b;
        printf("%d",temp);
        a=b;
        b=temp;
        printf("\n");

       
    }
    return 0;
}