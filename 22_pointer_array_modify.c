#include <stdio.h>

void changeArray(int *ptr);

int main(void)
{
    int arr[3]={10,20,30};

    changeArray(arr); //배열일때는 배열 자체가 주소를 가지므로 &안쓰고 보내도 됨
    for(int i=0;i<3;i++)
    {
        printf("%d\n",arr[i]);
    }

    changeArray(&arr[0]); //배열의 첫번째 값의 주소를 보내는 것도 결과 같음
    for(int i=0;i<3;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}

void changeArray(int *ptr)
{
    ptr[2]=50;
}