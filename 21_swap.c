#include <stdio.h>

void swap(int a,int b);
void swap_addr(int *a,int *b);

int main(void)
{
    int a=10;
    int b=20;
    printf("초기값은 a:%d,b:%d\n",a,b);

    swap(a,b); //swap을 사용해서 a와 b의 값을 바꾼다.
    printf("swap 후는 a:%d,b:%d\n",a,b);

    swap_addr(&a,&b); //swap_addr을 사용해서 a와 b의 값을 바꾼다.(주소를 던진다))
    printf("swap_addr 후는 a:%d,b:%d\n",a,b);

    return 0;
}

void swap(int a,int b) //값에 의한 복사 : a,b변수를 받아온 것이 아니고, 값(a:10,b:20)만 받아온 것이므로 swap 전 후 값이 바뀌지 않음
{
    int temp=a;
    a=b;
    b=temp;
    printf("swap 중은 a:%d,b:%d\n",a,b);
}

void swap_addr(int *a,int *b) //주소값을 넘기는 복사(*로 받아와야함)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("swap_addr 중은 a:%d,b:%d\n",*a,*b);
}