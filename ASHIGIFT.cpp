#include <bits/stdc++.h>
using namespace std;

typedef long long lli;

struct triplet{
  lli p, q, r;  
};

bool compare(const triplet &a, const triplet &b){
    return a.p <= b.p;
}

lli f(lli num, vector<triplet> v){
    for(int i=0;i<v.size();i++)
        if(v[i].q == -1) num -= v[i].r;
        else if(v[i].q <= num) num += v[i].r;
    return num;
}

lli lowerBound(lli k, lli low, lli high, vector<triplet> v){
    while(low<high){
        lli mid = low + (high-low)/2;
        if(k<=f(mid, v)) high = mid;
        else low = mid+1;
    }
    return low;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t, X, B, C;
	lli x, y, p, q, r;
	cin>>t;
	while(t--){
	    lli ans = 0;
	    vector<triplet> c;
	    cin>>X>>B;
	    for(int i=0;i<B;i++){
	        cin>>x>>y;
	        c.push_back({x, -1, y});
	    }
	    cin>>C;
	    for(int i=0;i<C;i++){
	        cin>>p>>q>>r;
	        c.push_back({p, q, r});
	    }
	    if(C==0){
	        for(int i=0;i<B;i++) ans += c[i].r;
	        cout<<ans+1<<"\n";
	    }
	    else{
	        // main logic
	        sort(c.begin(), c.end(), compare);
	        cout<<lowerBound(1, 1, LONG_MAX, c)<<"\n";
	    }
	}
	return 0;
}
