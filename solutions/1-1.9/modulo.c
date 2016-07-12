#include<stdio.h>

int main()
{
    int arr[42]={0};
    int count=0;
    int no,mod;
    
    while( scanf("%d",&no)==1 ){
        mod=no%42;
        if(arr[mod]==0){
            arr[mod]=1;
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}