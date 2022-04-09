//비밀번호 마스터 프로그램

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNum(int level);
void showQuestion(int level, int num1,int num2);
void success();
void fail();

int main(void) //전달값이 없는 'main'이름의 함수이고, int형 데이터를 반환하는 함수
{
    srand(time(NULL));
    int count=0;
    for(int i=1;i<=5;i++)
    {
        int num1=getRandomNum(i);
        int num2=getRandomNum(i);
        showQuestion(i,num1,num2);
        
        int answer=-1; //사용자 입력값을 일단 -1로 정의
        scanf("\t%d",&answer); //정수형 값을 받아서 answer에 저장
        if(answer==-1)
        {
            printf("프로그램을 종료합니다\n");
            exit(0); //exit:프로그램을 끝내버림(정상종료:0,비정상종료:1)
        }
        else if(answer==num1*num2)
        {
            success();
            count++;
        }
        else
        {
            fail();
        }
        
    }
    printf("정답을 맞춘 개수 : %d\n",count);
    return 0;
}

int getRandomNum(int level)
{
    return rand()%(level*7)+1;
}
void showQuestion(int level, int num1,int num2)
{
    printf("\t%d번째 비밀번호\n",level);
    printf("\t%d*%d 값을 입력하세요(종료:-1)\n",num1,num2);
}
void success()
{
    printf("정답입니다\n");
}
void fail()
{
    printf("틀렸습니다\n");
}