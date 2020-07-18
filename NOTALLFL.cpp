#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int a[n], flavs[k+1]={0}, dist_flav=1, l=0, r=0, ans=1;
	    for(int i=0;i<n;i++) cin>>a[i];
	    flavs[a[0]]++;
	    while(r<n-1){
	        while(r<n-1 and dist_flav<k){
	            r++;
	            if(flavs[a[r]]==0) dist_flav++;
    	        flavs[a[r]]++;
    	        if(dist_flav<k) ans=max(r-l+1, ans);
	        }
	        while(dist_flav==k){
	            if(flavs[a[l]]==1) dist_flav--;
    	        flavs[a[l]]--;
	            l++;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
