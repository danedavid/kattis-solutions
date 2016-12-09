#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	unsigned short int n,arr[14],p;
	unsigned short int num_ac=0,penalty_time=0;
	unsigned short int finish_time=0;
	
	cin>>n>>p;
	for(unsigned short int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	finish_time=arr[p];
	arr[p]=999;
	if(finish_time <= 300){
		num_ac++;
		penalty_time=finish_time;
	}
		
	sort(arr, arr+n);
	
	for(unsigned short int i=0;i<n;i++){
		if(arr[i] <= (300-finish_time)){
			finish_time=finish_time+arr[i];
			penalty_time=penalty_time+finish_time;
			num_ac++;
		}
	}
	
	cout<<num_ac<<" "<<penalty_time;
	
	return 0;
}
