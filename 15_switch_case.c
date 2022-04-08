#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int i=rand()%4; //0~3 반환
    printf("%d\n",i);
    switch (i)
    {
    case 0:
    printf("가위\n");
    break;
    case 1:
    printf("바위\n");
    break;
    case 2:
    printf("보\n");
    break;
    default:
    printf("몰라요\n");
    break;
    }
    return 0;
}