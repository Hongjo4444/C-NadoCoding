//물고기 키우기 프로그램

int level;
int arrayFish[6];
int *cursor;

void initData();
void printfFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();

#include <stdio.h>
#include <time.h>
int main(void)
{
    long startTime=0; //게임 시작 시간(시간은 long 타입 사용)
    long totalElapsedTime=0; //총 경과 시간
    long prevElapsedTime=0; //최근에 물을 준 시간 간격

    int num; //몇번 어항에 물을 줄 것인지(사용자 입력)
    initData(); //데이터 초기화 함수

    cursor=arrayFish; //포인터 변수를 array랑 똑같이 사용할 수 있게 설정

    startTime=clock(); //현재 시간을 m/s 단위로 저장----------게임 시작
    while(1)
    {
        printfFishes(); //물이 얼마나 남아있는지 알려주는 함수
        
        printf("몇번 어항에 물을 주시겠어요?");
        scanf("%d",&num);

        if(num<1||num>6) //입력값 체크
        {
            printf("\n입력값이 잘못되었습니다\n");
            continue;
        }

        totalElapsedTime=(clock()-startTime)/CLOCKS_PER_SEC; //총 경과 시간(초단위로 나눠서 걸린 시간 체크)
        printf("총 경과 시간:%ld초\n",totalElapsedTime);
        prevElapsedTime=totalElapsedTime-prevElapsedTime; //최근에 물을 준 시간 간격
        printf("최근 물을 준 경과 시간:%ld초\n",prevElapsedTime);

        decreaseWater(prevElapsedTime); //어항의 물을 감소시키는 함수

        if(cursor[num-1]<=0) //어항에 물이 0이면 물고기가 이미 죽은것
        {
            printf("%d번 어항의 물고기는 이미 죽었습니다\n",num);
        }
        else if(cursor[num-1]<=99) //어항에 물이 99이하일 경우 물을 준다
        {
            printf("%d번 어항에 물을 줍니다\n",num);
            cursor[num-1]+=1;
        }
        if(totalElapsedTime/20>level-1) //20초마다 게임 레벨업
        {
            level++;
            printf("레벨업! 기존 %d레벨에서 %d레벨이 되었습니다\n",level-1,level);
            if(level==5)
            {
                printf("축! 최고레벨 %d 달성. 게임 종료\n",level);
                exit(0); //프로그램 종료 명령
            }
        }
        if(checkFishAlive()==0) //살아있는 물고기 수 확인
        {
            printf("모든 물고기가 죽었습니다\n");
            exit(0);
        }
        else
        {
            printf("물고기가 아직 살아있어요\n");
        }
        prevElapsedTime=totalElapsedTime;
    }

    return 0;
}

void initData()
{
    level=1; //게임 레벨(1~5)
    for(int i=0;i<6;i++)
    {
        arrayFish[i]=100; //어항의 물 높이(0~100)
    }
}

void printfFishes()
{
    printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n",1,2,3,4,5,6); //%3d:3칸 크기로 지정
    for(int i=0;i<6;i++)
    {
        printf(" %4d ",arrayFish[i]);
    }
    printf("\n\n");
}

void decreaseWater(long elapsedTime)
{
    for(int i=0;i<6;i++)
    {
        arrayFish[i]-=(level*3*(int)elapsedTime); //난이도를 올리기 위한 3배속
        if(arrayFish[i]<0)
        {
            arrayFish[i]=0;
        }
    }
}

int checkFishAlive()
{
    for(int i=0;i<6;i++)
    {
        if(arrayFish[i]>0)
        {
            return 1; //한마리라도 살아있을 경우 1(참) 반환하고 바로 끝남
        }
    }
    return 0; //arrayFish[i]==0일경우 여기까지 내려옴
}