#include<stdio.h>
#include<string.h>

int main()
{
    int i,index,miss1=13,miss2=13,miss3=13,miss4=13,no;
    int hash[14];
    char curr;
    char str[1000];
    
    while( scanf("%s",str)==1 ){
        
		if((strlen(str)<3)||(strlen(str)%3!=0)){
			printf("GRESKA");
			return 0;
		}
		index=0;
		
        for(i=0;i<14;i++){
            hash[i]=0;
        }
        
        curr='P';
        for(i=0;str[i]!='\0';i++){
            if((i%3==0)&&(str[i]!=curr)){
				i+=2;
                continue;
            }
            if((i%3==1)&&(str[i]=='1')){
                index+=10;
            }
            if(i%3==2){
                no=(int)(str[i]-'0');
                index+=no;
                if(hash[index]==1){
                    printf("GRESKA");
                    return 0;
                }
                else{
                    hash[index]=1;
					index=0;
                    miss1--;
                }
            }
        }
        
        
        for(i=0;i<14;i++){
            hash[i]=0;
        }
		
        curr='K';
        for(i=0;str[i]!='\0';i++){
            if((i%3==0)&&(str[i]!=curr)){
                i+=2;
				continue;
            }
            if((i%3==1)&&(str[i]=='1')){
                index+=10;
            }
            if(i%3==2){
                no=(int)(str[i]-'0');
                index+=no;
                if(hash[index]==1){
                    printf("GRESKA");
                    return 0;
                }
                else{
                    hash[index]=1;
					index=0;
					miss2--;
                }
            }
        }
        
        
        for(i=0;i<14;i++){
            hash[i]=0;
        }
		
        curr='H';
        for(i=0;str[i]!='\0';i++){
            if((i%3==0)&&(str[i]!=curr)){
                i+=2;
				continue;
            }
            if((i%3==1)&&(str[i]=='1')){
                index+=10;
            }
            if(i%3==2){
                no=(int)(str[i]-'0');
                index+=no;
                if(hash[index]==1){
                    printf("GRESKA");
                    return 0;
                }
                else{
                    hash[index]=1;
					index=0;
					miss3--;
                }
            }
            
        }
        
        
        for(i=0;i<14;i++){
            hash[i]=0;
        }
		
        curr='T';
        for(i=0;str[i]!='\0';i++){
            if((i%3==0)&&(str[i]!=curr)){
                i+=2;
				continue;
            }
            if((i%3==1)&&(str[i]=='1')){
                index+=10;
            }
            if(i%3==2){
                no=(int)(str[i]-'0');
                index+=no;
                if(hash[index]==1){
                    printf("GRESKA");
                    return 0;
                }
                else{
                    hash[index]=1;
					index=0;
					miss4--;
                }
            }
            
        }
        printf("%d %d %d %d",miss1,miss2,miss3,miss4);
    }
}