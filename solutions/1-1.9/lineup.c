#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	int in=1,de=1,ne=0;
	int i=0;
	char str[20][12];
	
	while( scanf("%d",&n) == 1){
		for(i=0;i<n;i++){
			scanf("%s",str[i]);
			
			if(i>0){
				if( strcmp(str[i],str[i-1]) > 0 ){
					if((de==1)&&(in==1))
						de=0;
					else if(de==1) {
						de=0;
						ne=1;
						break;
					}
				}
				else {
					if((in==1)&&(de==1))
						in=0;
					else if(in==1) {
						in=0;
						ne=1;
						break;
					}
				}
			}
		}
	}
	
	if(in)
		printf("INCREASING\n");
	if(de)
		printf("DECREASING\n");
	if(ne)
		printf("NEITHER\n");
		
	return 0;
}
