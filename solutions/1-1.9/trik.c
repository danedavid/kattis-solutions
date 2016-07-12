#include<stdio.h>

int r=1;

void transfer(char c)
{
	if(c=='A'){
		if(r==1)
			r=2;
		else if(r==2)
			r=1;
	}	
	else if(c=='B'){
		if(r==2)
			r=3;
		else if(r==3)
			r=2;
	}
	else{
		if(r==3)
			r=1;
		else if(r==1)
			r=3;
	}
}

int main()
{
	int i;
	char str[50];
	
	while( scanf("%s",str) == 1)
	{
		for(i=0;(str[i]=='A')||(str[i]=='B')||(str[i]=='C');i++)
			transfer(str[i]);
	}
//	transfer(str[i]);
	
	printf("%d\n",r);
	
	return 0;
}
