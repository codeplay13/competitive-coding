#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree< pair<int,int> ,  null_type ,  less<pair<int,int>> ,  rb_tree_tag ,  tree_order_statistics_node_update >

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t, n, k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int A[n], ans=0;
	    for(int i=0;i<n;i++) cin>>A[i];
	    for(int i=0;i<n;i++){
	        int freq[2001] = {0};
	        ordered_set s;
	        for(int j=i;j<n;j++){
	            int m = ceil((double)k/(j-i+1));
	            int k1 = ceil((double)k/m)-1;
	            s.insert({A[j], ++freq[A[j]]});
	            auto it = s.find_by_order(k1);
	            int element = (*it).first;
	            int frequency = freq[element];
	            if(freq[frequency]>0) ++ans;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
