#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t, n;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<int> A(n);
	    for(int i=0;i<n;i++) cin>>A[i];
	    multiset<int> S;
	    S.insert(A[0]);
	    for(int i=1;i<n;i++){
	        if(A[i]>=*S.rbegin()) S.insert(A[i]);
	        else{
	            S.erase(S.upper_bound(A[i]));
	            S.insert(A[i]);
	        }
	    }
	    cout<<S.size()<<" ";
	    for(auto i: S) cout<<i<<" ";
	    cout<<"\n";
	}
	return 0;
}
