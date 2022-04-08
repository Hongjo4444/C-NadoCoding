#include <stdio.h>
int main(void)
{
    int a=10;
    int b=10;
    int c=12;
    int d=13;
    if(a==b&&c==d)
    {
        printf("a와b는 같고,c와d도 같습니다\n");
    }
    if(a==b||c==d)
    {
        printf("a와b 혹은 c와d의 값이 같습니다\n");
    }
    return 0;
}