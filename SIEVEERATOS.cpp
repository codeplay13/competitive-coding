#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> primes, semi_primes, mark(200, 0);

void sieve(){
    primes.push_back(2);
    for(int i=4;i<=200;i+=2) mark[i]=1;
    for(int i=3;i<=200;i++){
        if(mark[i]==0){
            primes.push_back(i);
            for(int j=i*i;j<=200;j+=i+i) mark[j]=1;
        }
    }
    for(int i=0;i<primes.size();i++)
        for(int j=0;j<primes.size();j++){
            if(j!=i) semi_primes.push_back(primes[i]*primes[j]);
        }

    sort(semi_primes.begin(), semi_primes.end());
}

int main() {
    sieve();
	int t, n;
	cin>>t;
	while(t--){
	    cin>>n;
	    bool flag=false;
	    for(int i=0;semi_primes[i]<n;i++){
	        int k=n-semi_primes[i];
	        if(binary_search(semi_primes.begin(), semi_primes.end(), k)){
	            flag=true;
	            break;
	        }
	    }
	    if(flag) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
