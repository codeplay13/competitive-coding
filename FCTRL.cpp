#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int ans = 0;
	    for(int i=5;i<=n;i=i*5){
	        ans += n/i;
	    }
	   // while(n){
	   //     ans += n/5;
	   //     n /= 5;
	   // }
	    cout<<ans<<"\n";
	}
	return 0;
}
