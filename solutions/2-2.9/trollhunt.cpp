//	Troll Hunt
#include<iostream>

using namespace std;
int main()
{
	unsigned int b,k,g;
	unsigned int num_grps;
	unsigned int days;
	
	cin>>b>>k>>g;
	num_grps = k/g;
	

	days = (b-1)/num_grps;
	if((b-1)%num_grps)
	    days++;
	
	cout<<days;
	
	return 0;
}