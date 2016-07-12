#include<stdio.h>

int main()
{
    char str[300];
    int i;
    int count=0;

    while( scanf("%s",str)==1 ){
        count=0;
        for(i=0;str[i]!='\0';i++){
            if((i%3==0)&&(str[i]!='P'))
                count++;
            if((i%3==1)&&(str[i]!='E'))
                count++;
            if((i%3==2)&&(str[i]!='R'))
                count++;
        }
        printf("%d",count);
    }
    return 0;
}