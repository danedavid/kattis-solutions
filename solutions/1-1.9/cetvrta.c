#include<stdio.h>

int a,b,c;
int p,q,r;
int x,y;
int one,two;

int main()
{
	while( scanf("%d%d%d%d%d%d",&a,&p,&b,&q,&c,&r) == 6 ){
		one=a;
		two=b;
		if(one==two)
			x=c;
		else
			x=(c==one)?two:one;
		
		
		one=p;
		two=q;
		if(one==two)
			y=r;
		else
			y=(r==one)?two:one;
		
		printf("%d %d\n",x,y);
	}
	return 0;
}
