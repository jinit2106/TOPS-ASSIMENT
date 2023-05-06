#include <stdio.h>
int main()
{
    // Write a program make a summation of given number
    int num, large = 0, rem = 0, total = 0;

    printf("Enter value : ");
    scanf("%d", &num);

    while (num > 0)
    {
        rem = num % 10;
        if (rem > large || rem < large)
        {
            large = rem;
            total = large + total;
        }
        num = num / 10;
    }

    printf("total of all digits is = %d", total);

    return 0;
}