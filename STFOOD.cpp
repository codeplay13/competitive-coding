#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, s, v, p, temp, ans=0;
	    cin>>n;
	    while(n--){
	        cin>>s>>p>>v;
	        temp = (p/(s+1))*v;
	        if(temp>ans) ans = temp;
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
