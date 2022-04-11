#include <stdio.h>

typedef struct Gameinfo //구조체 선언(만들기)
{    
    char *name;
    int year;
    int price;
    char *company;

    struct Gameinfo *freiendGame; //구조체 안의 구조체
} 게임정보; //'게임정보'로 별명 지정

int main(void)
{
    struct Gameinfo game1; //보통 사용법
    game1.name="한글게임2";
    game1.year=2014;

    int i=1;
    typedef int 정수; //typedef:자료형에 별명 지정(int->정수)
    정수 정수변수=3; //int i=3;이랑 같은것
    printf("정수변수:%d\n",정수변수);

    게임정보 game2; //typedef 사용법(별명으로 사용)
    game2.name="한글게임2";
    game2.year=2014;

    return 0;
}