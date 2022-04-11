#include <stdio.h>

#define MAX 10000 //MAX는 10000으로 정의

int main(void)
{
    char line[MAX];

    // FILE*file=fopen("c:\\test1.txt","wb"); // 쓰기 전용(앞글자 r(읽기),w(쓰기),a(이어쓰기), 뒷글자 t(텍스트),b(binary))
    // if(file==NULL)
    // {
    //     printf("파일 열기 실패\n");
    //     return 1;
    // }

    // fputs("fputs를 이용해 글 적기\n",file); //fputs로 파일 쓰기
    // fputs("잘 적혔는지 확인\n",file);
    // fclose(file);

    FILE*file=fopen("c:\\test1.txt","rb"); // 읽기 전용
    if(file==NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }
    while(fgets(line,MAX,file)!=NULL) //fgets로 파일 불러오기
    {
        printf("%s",line);
    }
    fclose(file);

    return 0;
}