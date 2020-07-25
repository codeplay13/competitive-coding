#include <iostream>
#include <set>
#include <utility>
using namespace std;

int main() {
	int t, n, m, k;
	cin>>t;
	while(t--){
	    int adj_count=0;
	    set<pair<int, int>> p;
	    cin>>n>>m>>k;
	    for(int i=0;i<k;i++){
	        cin>>n>>m;
	        p.insert({n, m});
	    }
	    for(auto i: p){
	        if(p.find({i.first-1, i.second})!=p.end()) ++adj_count;
	        if(p.find({i.first+1, i.second})!=p.end()) ++adj_count;
	        if(p.find({i.first, i.second-1})!=p.end()) ++adj_count;
	        if(p.find({i.first, i.second+1})!=p.end()) ++adj_count;
	    }
	    cout<<4*k-adj_count<<"\n";
	}
	return 0;
}
