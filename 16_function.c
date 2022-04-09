#include <stdio.h>

void function_without_return(); //반환값이 없는 함수

int function_with_return(); //반환값이 있는 함수(반환값이 있을때만 반환형으로 int/float/char 가능)

void function_without_params(); //파라미터(전달값)가 없는 함수(반환값은 없으므로 void)

void function_with_params(int num1,int num2,int num3); //파라미터(전달값)가 있는 함수(반환값은 없으므로 void)

int apple(int total,int ate); //파라미터(전달값),반환값이 모두 있는 함수

int main(void)
{
    int num=2;

    function_without_return();

    int ret=function_with_return(num);
    printf("%d\n",ret);

    function_without_params();

    function_with_params(1,2,3);

    int retu=apple(5,2);
    printf("%d\n",retu);
    printf("사과 %d개 중에 %d개를 먹으면 %d개가 남아요\n",10,4,apple(10,4));

    return 0;
}

void function_without_return()
{
    printf("반환값이 없는 함수입니다.\n");
}

int function_with_return()
{
    printf("반환값이 있는 함수입니다.\n");
    return 10;
}

void function_without_params()
{
    printf("전달값이 없는 함수입니다.\n");
}

void function_with_params(int num1,int num2,int num3)
{
    printf("전달값이 있는 함수입니다. 전달값은 %d, %d, %d 입니다.\n",num1,num2,num3);
}

int apple(int total,int ate)
{
    printf("전달값과 반환값이 있는 함수입니다. 전달값은 %d, %d 입니다.\n",total,ate);
    return total-ate;
}