#include <stdio.h>
int main(void)
{
    char c='A';
    printf("%c\n",c);

    char str[7]="coding"; //문자열 끝에는 끝을 의미하는 NULL문자인 '\0'의 자리가 필요함(6글자->7칸)
    printf("%s\n",str);
    char stri[]="coding";
    printf("%s\n",stri);
    printf("%lu\n",sizeof(stri));
    for (int i=0; i<sizeof(stri); i++)
    {
        printf("%c\n",stri[i]);
    }

    char kor[]="나도코딩"; //영어:1글자당 1byte, 한글:1글자당 2byte(EUC-KR) or 3byte(UTF-8)
    printf("%s\n",kor);
    printf("%lu\n",sizeof(kor));

    char strin[7]={'c','o','d','i','n','g','\0'};
    printf("%s\n",strin);
    char string[10]={'c','o','d','i','n','g'};
    printf("%s\n",string);
    for(int i=0;i<sizeof(string);i++)
    {
        printf("%c\n",string[i]);
    }

    return 0;
}