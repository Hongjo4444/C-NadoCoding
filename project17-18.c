//발모제 찾는 프로그램

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int answer; //사용자 입력값
    int treatment=rand()%4; //발모제 선택(0~3)
    
    int cntShowBottle=0; //이번 게임에 보여줄 병 갯수
    int prevShowBottle=0; //이전 게임에 보여준 병 갯수

    for(int i=1;i<=3;i++) //기회 3번
    {
        int bottle[4]={0,0,0,0}; //병 4개
        do
        {
            cntShowBottle=rand()%2+2; //보여줄 병 갯수(2or3개)
        } while (cntShowBottle==prevShowBottle); //현재 병 갯수==이전 병 갯수와 같다면 반복
        prevShowBottle=cntShowBottle; //이전값을 현재 한 값으로 초기화

        int isincluded=0; //보여줄 병 중에 발모제가 포함되었는지 여부(0:불포함,1:포함)
        printf("%d번째 시도\n",i);
        for(int j=0;j<cntShowBottle;j++) //보여줄 병 종류 선택
        {
            int randBottle=rand()%4;
            if(bottle[randBottle]==0) //아직 선택되지 않은 병이면 선택처리
            {
                bottle[randBottle]=1;
                if(randBottle==treatment)
                {
                    isincluded=1;
                }
            }
            else //이미 선택된 병이면 중복이므로 다시 선택
            {
                j--;
            }
        }
        for(int k=0;k<4;k++)
        {
            if(bottle[k]==1)
            {
                printf("%d ",k+1);
            }
        }
        printf("물약을 머리에 바릅니다\n");
        if(isincluded==1)
        {
            printf("머리가 났어요\n");
        }
        else
        {
            printf("머리가 안났어요\n");
        }
        printf("계속하려면 아무키나 누르세요\n");
        getchar(); //사용자가 키를 누를때까지 기다리는 용도
    }
    printf("발모제는 몇번일까요?\n");
    scanf("%d",&answer);
    if(answer==treatment+1)
    {
        printf("정답입니다.\n");
    }
    else
    {
        printf("틀렸습니다. 정답은 %d입니다\n",treatment+1);
    }
    return 0;
}