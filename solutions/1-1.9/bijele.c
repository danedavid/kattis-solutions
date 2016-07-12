#include<stdio.h>

int main()
{
    short int chess[6] = {1,1,2,2,2,8};
    short int in;
    int i=0;
    
    while( scanf("%hd",&in)==1 ){
        printf("%hd ", (chess[i]-in));
        i++;
    }
    
    return 0;
}