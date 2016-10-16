#include<iostream>

using namespace std;

int main()
{
	unsigned int n, m;
	unsigned int a, b;
	unsigned short int flag=0;
	float price=0.0, min=10000.0;
	unsigned int sel_a=0, sel_b=0;
	
	while(1) {
		cin>>n>>m;
		
		if( (n==0) && (m==0) )
			return 0;
		
		//for each test case
		flag=0;
		sel_a = 0;
		sel_b = 0;
		min=10000.0;
		
		for(int k=0;k<n;k++) {
			cin>>a>>b;
			
			if( a <= m ) {
				flag=1;
				
				price = (float)(b)/(float)(a);
				
				if( price <= min ) {
					if(price == min) {
						if( a > sel_a ) {
							sel_a = a;
							sel_b = b;
						}
					}
					else {
						sel_a = a;
						sel_b = b;
					}
					min = price;
				}
			}
		}
		
		if( flag == 0 )
			cout<<"No suitable tickets offered"<<endl;
		else
			cout<<"Buy "<<sel_a<<" tickets for $"<<sel_b<<endl;
	}
}
