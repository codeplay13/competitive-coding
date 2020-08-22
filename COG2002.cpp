#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin>>t;
	while(t--){
	    cin>>n;
	    long long a[n], max_sum=0;
	    for(int i=0;i<n;i++) cin>>a[i];
	    for(int i=0;i<n;i++) max_sum = max(max_sum, a[(((i-1)%n)+n)%n]+a[i]+a[(i+1)%n]);
      cout<<max_sum<<"\n";
	}
	return 0;
}
