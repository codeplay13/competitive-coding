#include <iostream>
#include <climits>
using namespace std;

typedef long long ll;

ll kadane(ll a[], int n, int k){
    ll cur_sum = 0, max_sum=INT_MIN;
    for(int i=0;i<n*k;++i){
        cur_sum = max(a[i%n], cur_sum+a[i%n]);
        max_sum = max(max_sum, cur_sum);
    }
    return max_sum;
}

int main() {
	int t, n, k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    ll a[n];
	    for(int i=0;i<n;++i) cin>>a[i];
	    if(k==1) cout<<kadane(a, n, 1)<<"\n";
	    else{
	        ll sum=0, ans = kadane(a, n, 2);
	        for(int i=0;i<n;i++) sum+=a[i];
	        if(sum>0) ans+=(k-2)*sum;
	        cout<<ans<<"\n";
	    }
	}
	return 0;
}
