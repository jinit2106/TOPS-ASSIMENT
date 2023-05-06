/*find of triangle*/


#include<stdio.h>
int main()
{
    int base,height,area;
    printf("ENTER THE BASE:");
    scanf("%d",&base);
    printf("ENTER THE HEIGHT");
    scanf("%d",&height);
    area=base*height/2;/*defination of area*/
    printf("THE AREA OF TRIANGLE IS:%d",area);
    return 0;
}