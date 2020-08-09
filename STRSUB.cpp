#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int lowerBound(int key, int low, int high, ll a[]){
    int ans=INT_MAX;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(a[mid]>=key){
            ans=min(ans, mid);
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans-1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long t, n, k, q, l, r;
	string s;
	cin>>t;
	while(t--){
	    cin>>n>>k>>q;
	    cin>>s;
	    ll j=-1, temp[2] = {0}, valj[n+1], sum[n+1]={0};
        for(int i=0;i<n;i++){
            while(temp[0] <= k and temp[1] <= k and ++j<n) ++temp[s[j]-'0'];
            valj[i+1] = j;
            --temp[s[i]-'0'];
	    }
	    for(int i=1;i<=n;i++) sum[i] = sum[i-1]+valj[i];
	    while(q--){
	        cin>>l>>r;
	        int z = lowerBound(r, l, r, valj);
	        ll ans = (r-z)*r+((l-1)*l)/2-(r*(r+1))/2+(r-l+1)+sum[z]-sum[l-1];
	        cout<<ans<<"\n";
	    }
	}
	return 0;
}
