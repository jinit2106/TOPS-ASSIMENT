/*find area of circle*/
#include<stdio.h>
int main()
{
    float radius,pie,area;
    pie=3.14;
    printf("enter the radius:");
    scanf("%f",&radius);
    area=pie*radius*radius;/*formula of area of circle*/
    printf("the area of circle=%.2f",area);
    return 0;
}