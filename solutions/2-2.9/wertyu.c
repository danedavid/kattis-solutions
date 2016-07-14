#include <stdio.h>

int main(void) {
	
	char keyboard[4][13] = {    { '`','1','2','3','4','5','6','7','8','9','0','-','=' },
	                            { 'Q','W','E','R','T','Y','U','I','O','P','[',']','\\' },
	                            { 'A','S','D','F','G','H','J','K','L',';','\'','e','e' },
	                            { 'Z','X','C','V','B','N','M',',','.','/','e','e','e' } };
	                            
    char input[10000];
    int i,k,h;
    
    while( fgets(input,10000,stdin)!=NULL ){
        for(i=0;input[i]!='\0';i++){
            if( input[i]==32 )
                printf(" ");
            if( input[i]=='\n')
                printf("\n");
            else{
                for(k=0;k<4;k++){
                    for(h=0;h<13;h++){
                        if( keyboard[k][h]==input[i] )
                            printf("%c",keyboard[k][h-1]);
                    }
                }
            }
        }
    }
	
	return 0;
}