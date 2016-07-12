#include<stdio.h>

int main()
{
    int i;
    char name[250];
    char prev;
    
    while( scanf("%s",name)==1 ){
        printf("%c",name[0]);
        prev=name[0];
        
        for(i=1;name[i]!='\0';i++){
            if(name[i]!=prev){
                printf("%c",name[i]);
                prev=name[i];
            }
        }
    }
    return 0;
}