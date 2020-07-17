#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
        // string s = to_string(n);
        // reverse(s.begin(), s.end());
        // cout<<stoi(s)<<"\n";
        int ans = 0;
        while(n){
            ans = ans*10 + n%10;
            n/=10;
        }
        cout<<ans<<"\n";
	}
	return 0;
}
