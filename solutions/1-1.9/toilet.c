#include<stdio.h>

char change(char s)
{
	if(s=='U')
		return 'D';
	return 'U';
}

int main(){
	
	char input[1000];
	char state;
	char pref;
	char fix;
	int count=0;
	int i=0,j;

	
	while( scanf("%s",input) == 1 ){
		
		for(j=1;j<=3;j++){
			count=0;
			state=input[0];
			
			switch(j){
				case 1:fix='U';
					break;
				case 2: fix='D';
					break;
				default: fix='D';
					break;
			}
		
			for(i=1;input[i]!='\0';i++){
				pref=input[i];
				if(j==3)
					fix=pref;
				if( state != pref ){
					count++;
					state=change(state);
				}
				if( state != fix ){
					count++;
					state=change(state);
				}
			}
			printf("%d\n",count);
		}
	}
	return 0;
}