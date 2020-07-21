#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, y, input, ans=INT_MAX;
	cin>>n>>x>>y;
	vector<pair<int, int>> contests;
	vector<int> V, W;
	for(int i=0;i<n;i++){
	    pair<int, int> p;
	    cin>>p.first>>p.second;
	    contests.push_back(p);
	}
	while(x--){
	    cin>>input;
	    V.push_back(input);
	}
	while(y--){
	    cin>>input;
	    W.push_back(input);
	}
	sort(V.begin(), V.end());
	sort(W.begin(), W.end());
    vector<int>::iterator s, e;
    for(int i=0;i<n;i++){
        s = --upper_bound(V.begin(), V.end(), contests[i].first);
        e = lower_bound(W.begin(), W.end(), contests[i].second);
        if(*s<=contests[i].first and *e>=contests[i].second) ans = min(ans, *e-*s+1);
    }
	cout<<ans;
	return 0;
}
