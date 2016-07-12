#include<stdio.h>

int main()
{
    int r,n;
    int i;
    int room;
    unsigned short int avail[101] = { 0 };
    
    while( scanf("%d%d",&r,&n)==2 ){
        for(i=0;i<n;i++){
            if( scanf("%d",&room) )
                avail[room]=1;
        }
        
        if(r==n)
            printf("too late");
        else{
            for(i=1;i<=r;i++){
                if(avail[i]==0){
                    printf("%d",i);
                    break;
                }
            }
        }
    }
    return 0;
}