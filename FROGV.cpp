#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
	int n, k, p, A, B;
	cin>>n>>k>>p;
	vector<pair<int, int>> a;
	for(int i=0;i<n;i++){
	    cin>>A;
	    a.push_back({A, i});
	}
	sort(a.begin(), a.end());
	vector<int> dp(n, 0);
	dp[a[0].second] = a[0].second;
	for(int i=1;i<n;i++)
	    if(a[i].first-a[i-1].first>k) dp[a[i].second] = a[i].second;
	    else dp[a[i].second] = dp[a[i-1].second];
	while(p--){
	    cin>>A>>B;
	    if(dp[A-1]==dp[B-1]) cout<<"Yes\n";
	    else cout<<"No\n";
	}
	return 0;
}
