/*wap to swap two number without usig third varrible*/


#include<stdio.h>
int main()
{
  int a,b;
  printf("enter value of a=");
  scanf("%d",&a);
  printf("enter the value of b=");
  scanf("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("a=%d\n",a);
  printf("b=%d\n",b);
 
  
   return 0;
}