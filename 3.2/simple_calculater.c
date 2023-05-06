/*make simple calculator*/


#include<stdio.h>
int main()
{
  int first,second;
  char opt;
  printf("enter first number:");
  scanf("%d",&first);
  printf("enter second number:");
  scanf("%d",&second);
  printf("select operator:");
  scanf(" ");
  scanf("%c",&opt);
  switch(opt)
  {
    case '+':{
        printf("ans=%d",first+second);
        break;
    }
    case '-':{
        printf("ans=%d",first-second);
        break;
    }
    case '*':{
        printf("ans=%d",first*second);
        break;
    }
    case '/':{
        printf("ans=%d",first/second);
        break;
    }
    default:{
        printf("enter valid number");
        break;
    }
  }

   return 0;
}