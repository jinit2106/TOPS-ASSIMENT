/*find number is even or odd using tenary operator */


#include<stdio.h>
int main()
{
   int num;
   printf("enter num:");
   scanf("%d",&num);
    (num/2) ? printf("number is even"):printf("number is odd");
   return 0;
}