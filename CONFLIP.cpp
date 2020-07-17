#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T, G, I, N, Q;
	cin>>T;
	while(T--){
	    cin>>G;
	    while(G--){
	        cin>>I>>N>>Q;
	        if (N%2 and I!=Q) cout<<(N/2)+1<<"\n";
	        else cout<<N/2<<"\n";
	    }
	}
	return 0;
}
