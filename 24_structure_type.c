#include <stdio.h>

struct Gameinfo //구조체 선언(만들기)
{    
    char *name;
    int year;
    int price;
    char *company;

    struct Gameinfo *freiendGame; //구조체 안의 구조체
};


int main(void)
{
    struct Gameinfo gameinfo1={"나도게임",2017,100,"나도회사"}; //구조체 사용법
    printf("-게임 출시 정보-\n"); //구조체 출력
    printf("게임명:%s\n",gameinfo1.name);
    printf("발매년도:%d\n",gameinfo1.year);
    printf("가격:%d\n",gameinfo1.price);
    printf("제작사:%s\n",gameinfo1.company);

    struct Gameinfo gamearray[2]={{"너도게임",2017,110,"너도회사"},{"니도게임",2017,120,"니도회사"}}; //구조체 배열 사용법

    struct Gameinfo *gamePtr; //구조체 포인터 사용법
    gamePtr=&gamearray[0];
    printf("-미션맨 게임 출시 정보-\n"); //구조체 출력
    printf("게임명:%s\n",gamePtr->name);
    printf("발매년도:%d\n",gamePtr->year);
    printf("가격:%d\n",gamePtr->price);
    printf("제작사:%s\n",gamePtr->company);

    gameinfo1.freiendGame=&gamearray[1];//구조체 안의 구조체 사용법
    printf("-미션맨 게임 출시 정보-\n"); //구조체 출력
    printf("게임명:%s\n",gameinfo1.freiendGame->name);
    printf("발매년도:%d\n",gameinfo1.freiendGame->year);
    printf("가격:%d\n",gameinfo1.freiendGame->price);
    printf("제작사:%s\n",gameinfo1.freiendGame->company);

    return 0;
}