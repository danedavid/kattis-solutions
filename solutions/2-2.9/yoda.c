#include<stdio.h>

int main()
{
    long int n,m;
    long int no1,no2;
    long int nw;
    int dig1,dig2;
    int pos;
    int flag;
    
    while( scanf("%ld%ld",&n,&m)==2 ){
        
        no1=n;
        no2=m;
        nw=0;
        pos=1;
        flag=1;
        while(no1>0){
            dig1=no1%10;
            dig2=no2%10;
            if(dig1>=dig2){
                nw=dig1*pos+nw;
                pos*=10;
                flag=0;
            }
            no1=no1/10;
            no2=no2/10;
        }
        if(flag)
            printf("YODA\n");
        else
            printf("%ld\n",nw);
        
        no1=n;
        no2=m;
        nw=0;
        pos=1;
        flag=1;
        while(no2>0){
            dig1=no1%10;
            dig2=no2%10;
            if(dig2>=dig1){
                nw=dig2*pos+nw;
                pos*=10;
                flag=0;
            }
            no1=no1/10;
            no2=no2/10;
        }
        if(flag)
            printf("YODA");
        else
            printf("%ld",nw);
    }
    
    return 0;
}