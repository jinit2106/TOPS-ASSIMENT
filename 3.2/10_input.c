#include<stdio.h>
int main()
{
    
    int ch,sum=0,even_sum=0,odd_sum=0;
    printf("enter size:");
    scanf("%d",&ch);
    int array1[ch];
    for(int i=0;i<ch;i++)
    {
        printf("enter value:");
        scanf("%d",&array1[i]);

    }
    for(int i=0;i<ch;i++)
    {
        if(array1[i]%2==0)
        {
            printf("%d is even\n");
            even_sum=even_sum+array1[i];
            
        }
        else{
            printf("%d is odd\n");
            odd_sum=odd_sum+array1[i];
        }
        for(int i=0;i<ch;i++)
        {
            sum=sum+array1[i];
        }
        printf("sum of even number=%d\n",even_sum);
        printf("sum of odd number=%d\n",odd_sum);
        printf("sum of all number=%d\n",sum);
    }


    return 0;
}