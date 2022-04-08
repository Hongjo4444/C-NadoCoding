//up,down 프로그램

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    srand(time(NULL));
    int num=rand()%100+1; //1~100 랜덤선택
    printf("숫자 : %d\n",num);
    int answer=0;
    int chance=5;
    while (1) //1:참(무한루프),0:거짓
    {
        printf("남은 기회 %d 번\n",chance--); //숫자 입력할때마다 기회 1씩 감소
        printf("숫자를 맞춰보세요(1~100) : ");
        scanf("%d",&answer);
        if(answer>num)
        {
            printf("DOWN\n");
        }
        else if(answer<num)
        {
            printf("UP\n");
        }
        else if(answer==num)
        {
            printf("정답입니다\n");
            break;
        }
    }
    return 0;
}