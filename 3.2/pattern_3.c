#include<stdio.h>
int main()
{
    char n='a';
    for(char i='a';i<'f';i++)
    {
        for(char j='a';j<i;j++)
        {

            printf("%c ",n++);
        }
        printf("\n");

    }
    return 0;
}