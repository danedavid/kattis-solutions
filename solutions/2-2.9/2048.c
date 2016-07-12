#include<stdio.h>

int game[4][4];
int k;
int i,j;
int ch;
int dummy;

void lshift(int p, int q)
{
	for(k=q;k<3;k++){
		game[p][k]=game[p][k+1];
	}
	game[p][k]=0;
}
void lmerge(int p, int q)
{
	game[p][q]*=2;
	for(k=q+1;k<3;k++){
		game[p][k]=game[p][k+1];
	}
	game[p][k]=0;
}

void rshift(int p, int q)
{
	for(k=q;k>0;k--){
		game[p][k]=game[p][k-1];
	}
	game[p][k]=0;
}
void rmerge(int p, int q)
{
	game[p][q]*=2;
	for(k=q-1;k>0;k--){
		game[p][k]=game[p][k-1];
	}
	game[p][k]=0;
}

void ushift(int p, int q)
{
	for(k=p;k<3;k++){
		game[k][q]=game[k+1][q];
	}
	game[k][q]=0;
}
void umerge(int p, int q)
{
	game[p][q]*=2;
	for(k=p+1;k<3;k++){
		game[k][q]=game[k+1][q];
	}
	game[k][q]=0;
}

void dshift(int p, int q)
{
	for(k=p;k>0;k--){
		game[k][q]=game[k-1][q];
	}
	game[k][q]=0;
}
void dmerge(int p, int q)
{
	game[p][q]*=2;
	for(k=p-1;k>0;k--){
		game[k][q]=game[k-1][q];
	}
	game[k][q]=0;
}

int main()
{
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			ch=scanf("%d",&game[i][j]);
		}
	}
	while( scanf("%d",&ch)==1 ){
	
	if((ch==0)||(ch==2)){
		for(i=0;i<4;i++){
			if(ch==0){
				for(j=0;j<3;j++){
					if(game[i][j]==0){
						lshift(i,j);
					}
				}
				for(j=0;j<3;j++){
					if(game[i][j]==0){
						lshift(i,j);
					}
				}
				for(j=0;j<3;j++){
					if(game[i][j]==game[i][j+1]){
						lmerge(i,j);
					}
				}
				for(j=0;j<3;j++){
					if(game[i][j]==0){
						lshift(i,j);
					}
				}
			}
			if(ch==2){
				for(j=3;j>0;j--){
					if(game[i][j]==0){
						rshift(i,j);
					}
				}
				for(j=3;j>0;j--){
					if(game[i][j]==0){
						rshift(i,j);
					}
				}
				for(j=3;j>0;j--){
					if(game[i][j]==game[i][j-1]){
						rmerge(i,j);
					}
				}
				for(j=3;j>0;j--){
					if(game[i][j]==0){
						rshift(i,j);
					}
				}
			}
		}
	}
	
	else{
		for(j=0;j<4;j++){
			if(ch==1){
				for(i=0;i<3;i++){
					if(game[i][j]==0){
						ushift(i,j);
					}
				}
				for(i=0;i<3;i++){
					if(game[i][j]==0){
						ushift(i,j);
					}
				}
				for(i=0;i<3;i++){
					if(game[i][j]==game[i+1][j]){
						umerge(i,j);
					}
				}
				for(i=0;i<3;i++){
					if(game[i][j]==0){
						ushift(i,j);
					}
				}
			}
			if(ch==3){
				for(i=3;i>0;i--){
					if(game[i][j]==0){
						dshift(i,j);
					}
				}
				for(i=3;i>0;i--){
					if(game[i][j]==0){
						dshift(i,j);
					}
				}
				for(i=3;i>0;i--){
					if(game[i][j]==game[i-1][j]){
						dmerge(i,j);
					}
				}
				for(i=3;i>0;i--){
					if(game[i][j]==0){
						dshift(i,j);
					}
				}
			}
		}
	}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d ",game[i][j]);
		}
		printf("\n");
	}
	return 0;
}
