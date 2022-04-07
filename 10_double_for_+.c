#include <stdio.h>

int main(void)
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(int i=0;i<5;i++)
    {
        for(int j=i;j<5-1;j++)
        {
            printf("S");
        }
        for(int k=0;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}