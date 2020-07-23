#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
	int n, x, y, area=0;
	vector<int> A(100001, 500), left(100001, 0), right(100001, 100000);
	stack<int> s1, s2;
	cin>>n;
	while(n--){
	    cin>>x>>y;
	    A[x] = min(A[x], y);
	}
	for(int i=0;i<100001;i++){
	    while(!s1.empty() and A[i]<=A[s1.top()]) s1.pop();
	    if(!s1.empty()) left[i] = s1.top();
	    s1.push(i);
	    while(!s2.empty() and A[100000-i]<=A[s2.top()]) s2.pop();
	    if(!s2.empty()) right[100000-i] = s2.top();
	    s2.push(100000-i);
	}
	for(int i=0;i<100001;i++) area = max(area, A[i]*(right[i]-left[i]));
	cout<<area;
	return 0;
}
