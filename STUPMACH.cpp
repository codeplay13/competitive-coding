#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int input, small=INT_MAX;
	    long long int count=0;
	    for(int i=0;i<n;i++){
	        cin>>input;
	        small = min(input, small);
	        count+=small;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
