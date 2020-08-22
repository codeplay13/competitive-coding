#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	ll y;
	cin>>t;
	while(t--){
	    cin>>y;
	    ll count=0;
	    for(ll a=sqrt(y-1);a>0;a--){
	        ll b = y-(a*a);
	        if(b<700) count += b;
	        else{
	            count += 700*a;
	            break;
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
