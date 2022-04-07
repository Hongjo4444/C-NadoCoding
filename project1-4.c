//경찰서 조서 작성 프로그램
//이름,나이,몸무게,키,범죄명 입력 후 출력

#include <stdio.h>
int main(void)
{
    //조서 내용 입력
    char name[256];
    printf("이름이 뭐에요?");
    scanf("%s",name,sizeof(name));

    int age;
    printf("몇살이에요?");
    scanf("%d",&age);

    float weight;
    printf("몸무게는 몇 kg 이에요?");
    scanf("%f",&weight);

    double height;
    printf("키는 몇 cm 에요?");
    scanf("%lf",&height);

    char what[256];
    printf("무슨 범죄를 저질렀어요?");
    scanf("%s",what,sizeof(what));

    //조서 내용 출력
    printf("\n\n---범죄자 정보---\n\n");
    printf("이름:%s\n",name);
    printf("나이:%d\n",age);
    printf("몸무게:%.2f\n",weight); //소수점 둘째자리까지 표기
    printf("키:%.2lf\n",height); //소수점 둘째자리까지 표기
    printf("범죄명:%s\n",what);
    
    return 0;
}