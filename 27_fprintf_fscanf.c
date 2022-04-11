#include <stdio.h>

#define MAX 10000 //MAX는 10000으로 정의

int main(void)
{
    int num[6]={0,0,0,0,0,0};
    int bonus=0;

    char str1[MAX];
    char str2[MAX];

    FILE*file=fopen("c:\\test2.txt","wb"); // 쓰기 전용(앞글자 r(읽기),w(쓰기),a(이어쓰기), 뒷글자 t(텍스트),b(binary))
    if(file==NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }
    fprintf(file,"%s %d %d %d %d %d %d\n","추첨번호",1,2,3,4,5,6); //로또 추첨번호 파일로 저장
    fprintf(file,"%s %d\n","보너스 번호",7);
    fclose(file);

    FILE*file=fopen("c:\\test2.txt","rb"); // 읽기 전용
    if(file==NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }
    fscanf(file,"%s %d %d %d %d %d %d",str1,&num[0],&num[1],&num[2],&num[3],&num[4],&num[5]); //로또 추첨번호 출력
    printf("%s %d %d %d %d %d %d\n",str1,num[0],num[1],num[2],num[3],num[4],num[5]);
    fscanf(file,"%s %d",str2,&bonus);
    printf("%s %d\n",str2,bonus);
    fclose(file);

    return 0;
}