//동물카드 뒤집기 프로그램

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initAnimalArray();
void initAnimalname();
void shuffleAniaml();
int getEmptyPos();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimal();
void printQuestion();
int foundAllAnimals();

int arrayAnimal[4][5]; //전체 카드 20장
int checkAnimal[4][5]; //뒤집혔는지 여부 확인
char *strAnimal[10]; //동물 이름(포인터형의 10개 배열)
int main(void)
{
    srand(time(NULL));
    initAnimalArray(); //동물카드 배열 함수
    initAnimalname(); //동물 이름 함수
    shuffleAniaml(); //동물 섞어서 배치하는 함수

    int failCount=0; //실패 횟수
    while (1)
    {
        int select1=0;
        int select2=0;

        printAnimal(); //동물 위치 출력
        printQuestion(); //문제 출력(카드 지도)
        printf("뒤집을 카드 2개를 고르세요 : ");
        scanf("%d %d",&select1,&select2);
        if(select1==select2) //같은걸 고르면 넘어가기
        {
            continue;
        }
        int firstSelect_x=conv_pos_x(select1); //정수 좌표를 (x,y)로 변환
        int firstSelect_y=conv_pos_y(select1); 
        int secondSelect_x=conv_pos_x(select2);
        int secondSelect_y=conv_pos_y(select2);

        if((checkAnimal[firstSelect_x][firstSelect_y]==0 && checkAnimal[secondSelect_x][secondSelect_y]==0)
        && (arrayAnimal[firstSelect_x][firstSelect_y]==arrayAnimal[secondSelect_x][secondSelect_y])) //카드가 뒤집히지 않았는지 확인 + 두 동물이 같은지 확인
        {
            printf("%c를 발견했습니다\n",strAnimal[firstSelect_x][firstSelect_y]);
            checkAnimal[firstSelect_x][firstSelect_y]=1;
            checkAnimal[secondSelect_x][secondSelect_y]=1;
        }
        else
        {
            printf("틀렸거나 이미 뒤집힌 카드입니다\n");
            printf("%d : %c\n",select1,strAnimal[firstSelect_x][firstSelect_y]);
            printf("%d : %c\n",select2,strAnimal[secondSelect_x][secondSelect_y]);
            printf("\n");

            failCount++;
        }
        if(foundAllAnimals()==1) //1:참,0:거짓
        {
            printf("모든 동물을 찾았습니다\n");
            printf("지금까지 총 %d번 실수하셨습니다\n",failCount);
            break;
        }
    }
    return 0;
}

void initAnimalArray()
{
for(int i=0;i<4;i++)
{
    for(int j=0;j<5;j++)
    {
        arrayAnimal[i][j]=-1;
    }
}
}

void initAnimalname()
{
    strAnimal[0]="원숭이";
    strAnimal[1]="하마";
    strAnimal[2]="강아지";
    strAnimal[3]="고양이";
    strAnimal[4]="돼지";
    strAnimal[5]="코끼리";
    strAnimal[6]="기린";
    strAnimal[7]="낙타";
    strAnimal[8]="타조";
    strAnimal[9]="호랑이";
}

void shuffleAniaml()
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<2;j++)
        {
            int pos=getEmptyPos(); //빈 공간(position)의 좌표 받아와서 x,y로 변환하는 함수
            int x=conv_pos_x(pos);
            int y=conv_pos_y(pos);

            arrayAnimal[x][y]=i;
        }
    }
}

int getEmptyPos()
{
    while (1)
    {
        int randPos=rand()%20;
        int x=conv_pos_x(randPos); //랜덤으로 받은 값을 x,y로 바꾸기(ex)19->(3,4))
        int y=conv_pos_y(randPos);

        if(arrayAnimal[x][y]==-1)
        {
            return randPos;
        }
    }
    return 0; //함수가 int로 반환하는 함수여서 의미는 없지만 써줘야함
}

int conv_pos_x(int x)
{
    return x/5;
}
int conv_pos_y(int y)
{
    return y%5; //5로 나눈 나머지
}

void printAnimal()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%8s",strAnimal[arrayAnimal[i][j]]);
        }
        printf("\n");
    }
}

void printQuestion()
{
    printf("문제\n");
    int seq=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(checkAnimal[i][j]!=0) //카드를 뒤집어서 정답이면 동물 이름 보여주기
            {
                printf("%8s",strAnimal[arrayAnimal[i][j]]);
            }
            else //카드를 뒤집어서 정답이 아니면 뒷면 출력
            {
                printf("%8d",seq);
            }
            seq++;
        }
        printf("\n");
    }
}

int foundAllAnimals()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(checkAnimal[i][j]==0)
            {
                return 0;
            }
        }
    }
    return 1;
}