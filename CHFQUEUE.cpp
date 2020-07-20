#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	long long int ans=1;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	stack<int> si;
	for(int i=n-1;i>=0;i--){
	    while(!si.empty() and a[si.top()]>=a[i]) si.pop();
	    if(!si.empty()) ans = (ans*(si.top()-i+1))%1000000007;
	    si.push(i);
	}
	cout<<ans;
	return 0;
}
