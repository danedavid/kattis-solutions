#include<stdio.h>
#include<string.h>

int main()
{
    char john[1000];
    char doctor[1000];
    
    while( scanf("%s%s",john,doctor)==2 ){
        if(strlen(doctor) > strlen(john))
            printf("no");
        else
            printf("go");
    }
    
    return 0;
}
