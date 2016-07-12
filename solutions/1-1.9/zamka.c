#include<stdio.h>

int sum(int no)
{
    int dig,sum=0;
    
    while(no>0){
        dig=no%10;
        sum+=dig;
        no=no/10;
    }
    return sum;
}

int main()
{
    int l,d,x;
    int n,m;
    int i;
    
    while( scanf("%d%d%d",&l,&d,&x)==3 ){
        for(i=l;i<=d;i++){
            if(sum(i)==x){
                printf("%d\n",i);
                break;
            }
        }
        for(i=d;i>=l;i--){
            if(sum(i)==x){
                printf("%d",i);
                break;
            }
        }
    }
    return 0;
}