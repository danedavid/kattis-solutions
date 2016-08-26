#include <iostream>

using namespace std;

int main()
{
	int t, n, sum=0, count=0, num;
	
	cin>>n>>t;
	
	for(int i=0;i<n;i++) {
		cin>>num;
		sum+=num;
		count++;
		if(sum>t) {
			cout<<count-1;
			return 0;
		}
	}
	cout<<count;
	return 0;
}
