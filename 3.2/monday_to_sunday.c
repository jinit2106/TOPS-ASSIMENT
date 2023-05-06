/*wap to show monday to sunday using switch case*/


#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        {
            printf("moday");
            break;
        }
        case 2:
        {
            printf("tuesday");
            break;
        }
        case 3:
        {
            printf("wednesday");
            break;
        }
        case 4:
        {
            printf("thursday");
            break;
        }
        case 5:
        {
            printf("friday");
            break;
        
    }
        case 6:
        {
            printf("saturday");
            break;

        }
        case 7:
        {
            printf("sunday");
            break;
        }
        default :
        {
            printf("enter number between 1 to 7");
        }

    }
    return  0;
}