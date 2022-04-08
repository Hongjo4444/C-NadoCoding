#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    printf("\n난수 초기화 이전\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",rand() %10+1); //1~10 범위의 랜덤한 숫자 선택됨(원래 %10이면 0~9 범위)
    }
    srand(time(NULL)); //난수 초기화(안하면 한번 결정된 랜덤값이 바뀌지 않음)
    printf("\n난수 초기화 이후\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",rand() %10+1); //1~10 범위의 랜덤한 숫자 선택됨(원래 %10이면 0~9 범위)
    }
    return 0;
}