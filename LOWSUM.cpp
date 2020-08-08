#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

#define lli long long int

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, k, q;
	cin>>t;
	while(t--){
	    cin>>k>>q;
	    vector<lli> A(k), B(k), V;
	    priority_queue<lli> pq;
	    for(int i=0;i<k;i++) cin>>A[i];
	    for(int i=0;i<k;i++) cin>>B[i];
	    sort(A.begin(), A.end());
	    sort(B.begin(), B.end());
        for(int i=0;i<k;i++)
           for(int j=0;j<k;j++){
               if(pq.size()<=10000) pq.push(A[i]+B[j]);
               else if(A[i]+B[j]<pq.top()){
                   pq.pop();
                   pq.push(A[i]+B[j]);
               }
               else break;
           }
        while(!pq.empty()){
           V.push_back(pq.top());
           pq.pop();
        }
        while(q--){
           cin>>k;
           cout<<V[V.size()-k]<<"\n";
        }
	}
	return 0;
}
