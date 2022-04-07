#include <stdio.h>

int main(void)
{
    int i=1;
    do //do{} while(조건)
    {
        printf("Hello World %d\n",i++);
    } while (i<=10);
    
    return 0;
}