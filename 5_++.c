#include <stdio.h>

int main(void)
{
    //++연산자(a=a+1)
    int a=10;
    printf("a는 %d\n",a);
    a++;
    printf("a는 %d\n",a);
    a++;
    printf("a는 %d\n",a);

    int b=20;
    printf("b는 %d\n",++b); //++을 실행하고 printf
    printf("b는 %d\n",b++); //printf를 하고 ++ 실행
    printf("b는 %d\n",b);

    return 0;
}