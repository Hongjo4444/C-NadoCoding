//구구단 프로그램
#include <stdio.h>
int main(void)
{
    for(int i=2;i<=9;i++)
    {
        printf("%d단 계산\n",i);
        for(int j=1;j<=9;j++)
        {
            printf("    %dx%d=%d\n",i,j,i*j);
        }
    }
    return 0;
}