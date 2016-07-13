#include<stdio.h>

int main()
{
    char str[100000];
    int i;
    float whitespace=0.0, lower=0.0, upper=0.0, symbol=0.0;
    float ratio;
    
    while( scanf("%s",str)==1 ){
        for(i=0;str[i]!='\0';i++){
            if(str[i]=='_')
                whitespace += 1.0;
            else if(str[i]>='a'&&str[i]<='z')
                lower += 1.0;
            else if(str[i]>='A'&&str[i]<='Z')
                upper++;
            else
                symbol += 1.0;
        }
        
        ratio = whitespace/(float)(i);
        printf("%f\n",ratio);
        ratio = lower/(float)(i);
        printf("%f\n",ratio);
        ratio = upper/(float)(i);
        printf("%f\n",ratio);
        ratio = symbol/(float)(i);
        printf("%f",ratio);
    }
    
    return 0;
}