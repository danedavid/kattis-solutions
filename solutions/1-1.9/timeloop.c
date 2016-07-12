#include<stdio.h>

int n,i;

int main()
{
    while( scanf("%d",&n)==1 ){
        for(i=1;i<=n;i++){
            printf("%d Abracadabra\n",i);
        }
    }
    return 0;
}