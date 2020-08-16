#include <iostream>
using namespace std;

typedef long long int lli;

int gcd(int a, int b){
    if(a==0) return b;
    return gcd(b%a, a);
}

lli LCM(lli a, lli b){
    return (a*b)/gcd(a,b);
}

int main() {
	int t;
	lli n, k, a, b;
	cin>>t;
	while(t--){
	    cin>>n>>a>>b>>k;
	    if((n/a)+(n/b)-2*(n/LCM(a,b))<k) cout<<"Lose"<<"\n";
	    else cout<<"Win"<<"\n";
	}
	return 0;
}
