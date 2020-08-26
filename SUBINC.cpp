// dp
// count subarrays - summation j=0 to N -> j-i+1

#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n], i;
	    long long count = 1;
	    for(i=0;i<n;i++) cin>>a[i];
	    i=0;
	    for(int j=1;j<n;j++){
	        if(a[j]<a[j-1]){
	            i=j;
	            ++count;
	        }
	        else count += j-i+1;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
