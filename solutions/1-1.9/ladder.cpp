#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double h,v;
    
    cin>>h>>v;
    v=(v*M_PI)/180;
    
    cout<<ceil(1/(sin(v)/h));
    
	return 0;
}