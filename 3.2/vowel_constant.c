/*vowel and constant using switch case*/


#include<stdio.h>
int main()
{
   char jm;
   printf("enter the value:");
   scanf("%c",&jm);
   switch(jm)
   {
      case 'a':{
         printf("this character is vowel");
         break;
      }
      case 'e':{
         printf("this character is vowel");
         break;
      }
      case 'i':{
         printf("this character is vowel");
         break;
      }
      case 'o':{
         printf("this character is vowel");
         break;
      }
      case 'u':{
         printf("this character is vowel");
         break;
      }
      default:{
         printf("this is constant");
      }
   }
}