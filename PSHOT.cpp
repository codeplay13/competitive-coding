#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t, n;
	string s;
	cin>>t;
	while(t--){
	    cin>>n;
	    cin>>s;
	    int gA=0, gB=0, rA=n, rB=n, ans=2*n;
	    for(int i=0;i<2*n;i++){
	        if(i%2 == 0){
	            if(s[i] == '1') gA++;
	            rA--;
	        }
	        if(i%2 == 1){
	            if(s[i] == '1') gB++;
	            rB--;
	        }
	        if(((gA-gB) > rB) || (gB-gA) > rA){
	            ans = i+1;
	            break;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
