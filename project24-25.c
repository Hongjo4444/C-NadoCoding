//5마리 고양이 수집 프로그램

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct //구조체 선언
{    
    char *name;
    int age;
    char *character;
    int level;
} CAT;

void initCats();
void printCat(int selected);
int checkcollection();

int collection[5]={0,0,0,0,0}; //초기 보유한 고양이
CAT cats[5]; //5마리 고양이 리스트

int main(void)
{
    srand(time(NULL));

    initCats(); //고양이 정보 초기화 함수
    while(1)
    {
        printf("아무키나 눌러서 뽑아보세요\n");
        getchar();

        int selected=rand()%5;
        printCat(selected); //뽑은 고양이 정보 알려주는것

        collection[selected]=1; //뽑은 고양이는 뽑았다고 처리

        int collectAll=checkcollection(); //5마리 다 모았는지 체크
        if(collectAll==1)
        {
            break;
        }
    }

    return 0;
}

void initCats()
{
    cats[0].name="깜냥이";
    cats[0].age=5;
    cats[0].character="온순";
    cats[0].level=1;

    cats[1].name="귀요미";
    cats[1].age=3;
    cats[1].character="날카롭";
    cats[1].level=2;

    cats[2].name="수줍이";
    cats[2].age=7;
    cats[2].character="늘 잠";
    cats[2].level=3;

    cats[3].name="까꿍이";
    cats[3].age=2;
    cats[3].character="시끄럽";
    cats[3].level=4;

    cats[4].name="돼냥이";
    cats[4].age=1;
    cats[4].character="배고픔";
    cats[4].level=5;
}

void printCat(int selected)
{
    printf("뽑은 고양이 입니다\n");
    printf("이름:%s\n",cats[selected].name);
    printf("나이:%d\n",cats[selected].age);
    printf("특징(성격):%s\n",cats[selected].character);
    printf("레벨:");
    for(int i=0;i<cats[selected].level;i++)
    {
        printf("%s","⭐️");
    }
    printf("\n\n");
}

int checkcollection()
{
    int collectAll=1;

    printf("<보유한 고양이 목록>\n");
    for(int i=0;i<5;i++)
    {
        if(collection[i]==0) //고양이를 못뽑은 경우
        {
            printf("%10s","빈 박스");
            collectAll=0;
        }
        else //고양이를 뽑은 경우
        {
            printf("%10s",cats[i].name);
        }
    }
    printf("\n\n");
    if(collectAll)
    {
        printf("모든 고양이를 다 모았습니다.\n");
    }
    return collectAll;
}