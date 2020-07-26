#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
	int n, q, input, j;
	set<int> S;
    S.insert(1);
	cin>>n>>q;
	int A[n+1];
	for(int i=1;i<=n;i++) cin>>A[i];
	for(int i=2;i<=n;i++){
	    if(A[i]%A[i-1] != 0)
	    S.insert(i);
	}
	while(q--){
	    cin>>input>>j;
	    if(input==1){
	        cin>>A[j];
	        S.insert(j);
	        S.insert(j+1);
	        if(j>1 and A[j]%A[j-1]==0) S.erase(j);
	        if(j<n and A[j+1]%A[j]==0) S.erase(j+1);
	    }
	    else cout<<*(--(S.upper_bound(j)))<<"\n";
	}
	return 0;
}
