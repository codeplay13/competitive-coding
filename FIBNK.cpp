#include <iostream>
using namespace std;

typedef long long int ll;
#define R 1000000007

void multiply(ll F[2][2], ll M[2][2]){ 
    ll x =  F[0][0]*M[0][0] + F[0][1]*M[1][0]; 
    ll y =  F[0][0]*M[0][1] + F[0][1]*M[1][1]; 
    ll z =  F[1][0]*M[0][0] + F[1][1]*M[1][0]; 
    ll w =  F[1][0]*M[0][1] + F[1][1]*M[1][1]; 
    
    F[0][0] = x%R; 
    F[0][1] = y%R; 
    F[1][0] = z%R; 
    F[1][1] = w%R; 
} 

void power(ll F[2][2], int n){ 
    if(n == 0 || n == 1) return; 
    ll M[2][2] = {{1, 1}, {1, 0}}; 
    power(F, n / 2); 
    multiply(F, F); 
    if (n % 2 != 0) multiply(F, M); 
} 

ll fib(int n){ 
    ll F[2][2] = {{1,1},{1,0}}; 
    if (n == 0) return 0; 
    power(F, n-1); 
    return F[0][0]; 
} 
  
ll sumfib(int n){
    return (fib(n+1)-1)%R;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t, n, k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
        if(n<=k) cout<<sumfib(n)<<"\n";
        else cout<<((((n/k)*sumfib(k))%R)+(sumfib(n%k)))%R<<"\n";
	}
	return 0;
}
