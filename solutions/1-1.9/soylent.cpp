#include<iostream>
using namespace std;

int main()
{
    unsigned short int t;
    unsigned short int n;
    
    cin>>t;
    
    while(t--){
        cin>>n;
        
        if(n%400==0)
            cout<<n/400<<endl;
        else
            cout<<(n/400)+1<<endl;
    }
    return 0;
}