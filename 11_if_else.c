#include <stdio.h>
int main(void)
{
    int age=21;
    if(age>=20) //if(조건) {} else(조건) {}
    {
        printf("일반인 입니다.\n");
    }
    else
    {
        printf("학생입니다.\n");
    }

    int age2=19;
    if(age2>=8 && age2<=13)
    {
        printf("초등학생입니다.\n");
    }
    else if (age2>=14 && age2<=16)
    {
        printf("중학생입니다.\n");
    }
    else if (age2>=17 && age2<=19)
    {
        printf("고등학생입니다.\n");
    }
    else
    {
        printf("일반인입니다.\n");
    }
    
    return 0;
}