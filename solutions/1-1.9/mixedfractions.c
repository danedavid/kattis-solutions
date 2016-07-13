#include<stdio.h>

int main()
{
    unsigned int n,d;
    unsigned int num, denom, whole;
    
    while( scanf("%u%u",&n,&d)==2 ){
        if(n==0&&d==0)
            return 0;
        
        whole = n/d;
        num = n%d;
        denom = d;
        
        printf("%u %u / %u\n",whole,num,denom);
    }
    
    return 0;
}