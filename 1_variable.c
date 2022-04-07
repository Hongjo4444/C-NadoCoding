#include <stdio.h>
int main(void)
{
    //정수형 변수에 대한 예제
    int age=12;
    /*printf("%d\n",age);*/
    age=13;
    printf("%d\n",age);

    //실수형 변수에 대한 예제
    float f=46.5f; //실수는 뒤에 f써주기
    printf("%f\n",f);
    printf("%.2f\n",f);
    double d=4.428;
    printf("%.2lf\n",d);

    //주석 예제
    printf("1\n");
    //printf("2\n");
    printf("3\n");

    return 0;
}