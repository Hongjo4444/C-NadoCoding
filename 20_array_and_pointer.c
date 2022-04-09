//배열과 포인터의 관계
#include <stdio.h>
int main(void)
{
    int arr[3]={5,10,15};
    int *ptr=arr; //포인터=배열로 설정
    for(int i=0;i<3;i++)
    {
        printf("배열 arr[%d]의 값 : %d\n",i,arr[i]);
    }
    for(int i=0;i<3;i++)
    {
        printf("포인터 ptr[%d]의 값 : %d\n",i,ptr[i]);
    }

    ptr[0]=100; //포인터의 값 변경
    ptr[1]=200;
    ptr[2]=300;
    for(int i=0;i<3;i++)
    {
        printf("배열 arr[%d]의 값 : %d\n",i,arr[i]);
        printf("배열 arr[%d]의 값 : %d\n",i,*(arr+i)); //다르게 쓰는법(arr[i]=*(arr+i))
    }
    for(int i=0;i<3;i++)
    {
        printf("포인터 ptr[%d]의 값 : %d\n",i,ptr[i]);
        printf("포인터 ptr[%d]의 값 : %d\n",i,*(ptr+i)); //다르게 쓰는법(ptr[i]=*(ptr+i))
    }

    printf("arr 자체값의 주소:%d\n",arr);
    printf("arr[0]의 주소:%d\n",&arr[0]);

    printf("arr 자체값의 주소에 입력된 값:%d\n",*arr);
    printf("arr[0]에 입력된 값:%d\n",*&arr[0]);
    printf("arr[0]에 입력된 값:%d\n",arr[0]); //'&'는 주소, '*'은 그 주소의 값이므로 *&는 서로 상쇄되어 아무것도 없는것과 같다

    return 0;
}