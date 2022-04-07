#include <stdio.h>

int main(void)
{
    char c='A';
    printf("%c\n",c);

    char str[256]; //배열 만들기
    scanf("%s",str,sizeof(str)); //256개 이내의 문자만 받는 것으로 사이즈 정하기
    printf("%s\n",str);
    
    return 0;
}