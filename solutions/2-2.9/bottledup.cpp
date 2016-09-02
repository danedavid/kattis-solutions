#include<iostream>

using namespace std;

int main()
{
	unsigned long int s, v1, v2;
	unsigned long int x=0, y=0;
	
	cin>>s>>v1>>v2;
	
	if(s%v1==0) {
		cout<<s/v1<<" 0\n";
		return 0;
	}
	else {
		unsigned long int curr=0;
		x=s/v1;
		
		while(x>=0) {
			curr = s-(x*v1);
//			cout<<x<<endl;
			if(curr%v2==0) {
				cout<<x<<" "<<curr/v2<<endl;
				return 0;
			}
			else {
				if(x==0) {
					cout<<"Impossible\n";
					return 0;
				}
			}
			if(x!=0)
				x--;
		}
	}
	return 0;
}
