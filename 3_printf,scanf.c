#include <stdio.h>
int main(void)
{
    //printf
    int add=3+7;
    printf("3+7=%d\n",add);
    printf("%d+%d=%d\n",3,7,3+7);

    //scanf
    int input;
    printf("값을 입력하세요 : ");
    scanf("%d",&input); //숫자 scanf 할때는 '&'쓰고 받기
    printf("입력값 : %d\n", input);

    int one,two,three;
    printf("3개의 정수를 입력하세요 : ");
    scanf("%d %d %d",&one,&two,&three);
    printf("첫번째 값 : %d\n",one);
    printf("두번째 값 : %d\n",two);
    printf("세번째 값 : %d\n",three);

    return 0;
}