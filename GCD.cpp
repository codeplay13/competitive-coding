#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0) return b;
    return gcd(b%a, a);
}

int main() {
	int t, l, b;
	cin>>t;
	while(t--){
	    cin>>l>>b;
	    cout<<gcd(l, b)<<"\n";
	}
	return 0;
}
