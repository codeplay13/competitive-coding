#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    string s;
	    int ans=0, count=0;
	    cin>>s;
	    for(int i=0;i<s.size();i++){
	        if(s[i] == '<') count++;
	        else count--;
	        if(count<0) break;
	        else if(count==0) ans=i+1;
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
