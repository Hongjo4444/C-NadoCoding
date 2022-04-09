#include <stdio.h>
int main(void)
{
    //배열
    int subway_array[3];
    subway_array[0]=30;
    subway_array[1]=40;
    subway_array[2]=50;
    for(int i=0;i<3;i++)
    {
        printf("지하철 %d호차에 %d명이 타고 있습니다.\n",i+1,subway_array[i]);
    }

    //배열 값 설정
    int arr[10]={1,2,3,4,5,6,7,8,9,10}; //배열의 크기(10)를 선언할때는 변수로 못넣고, 무조건 숫자로 크기를 정해줘야함
    for(int i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
    int arra[10]={1,2}; //선언하지 않은 배열의 값은 0으로 설정됨.
    for(int i=0;i<10;i++)
    {
        printf("%d\n",arra[i]);
    }
    float array[]={1.0f,2.0f,3.0f}; //배열 크기를 빈칸으로 놔도 됨
    for(int i=0;i<10;i++)
    {
        printf("%.2f\n",array[i]); //float형 출력하는 방법
    }
    return 0;
}