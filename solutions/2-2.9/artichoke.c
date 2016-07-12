#include<stdio.h>
#include<math.h>
#include<float.h>

int a,b,c,d,p;
long int i,j;

double price(long int k){
	double cost;
		
	cost = (double)(p*(sin(a*k+b) + cos(c*k+d) + 2.0));
	
	return cost;
}

int main()
{
	long int n;
	double in,curr;
	double max;
	double diff=0.0;
	max = price(1);;

	while( scanf("%d%d%d%d%d%ld",&p,&a,&b,&c,&d,&n)==6 ){
		for(i=1;i<=n;i++){
			in = price(i);
			curr = max-in;
			
			if(in > max)
				max=in;
			if(curr > diff)
				diff=curr;
		}
		
		printf("%f\n",diff);
	}
}
