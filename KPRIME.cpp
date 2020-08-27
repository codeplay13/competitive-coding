#include <iostream>
#include <vector>
using namespace std;

vector<int> dp(100001, 0);

void slow_sieve(){
    for(int i=2;i<=100000;++i)
        if(dp[i]==0)
            for(int j=i;j<=100000;j+=i) ++dp[j];
}

int main() {
	slow_sieve();
	int t, a, b, k;
	cin>>t;
	while(t--){
	    cin>>a>>b>>k;
	    int count=0;
	    for(int i=a;i<=b;++i)
	        if(dp[i]==k) count++;
	    cout<<count<<"\n";
	}
	return 0;
}
