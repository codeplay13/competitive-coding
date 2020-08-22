#include <iostream>
using namespace std;

int main() {
	int t, n, input;
	cin>>t;
	while(t--){
	    int min=2e5, ans;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>input;
	        if(input<min){
	            ans = i+1;
	            min = input;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
