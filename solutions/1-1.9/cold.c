#include<stdio.h>

int main()
{
    long int t;
    int n;
    int i,x;
    int count=0;
    
    while( scanf("%d",&n)==1 ){
        for(i=0;i<n;i++){
            x=scanf("%ld",&t);
            if(t<0)
                count++;
        }
        printf("%d",count);
    }
    return 0;
}