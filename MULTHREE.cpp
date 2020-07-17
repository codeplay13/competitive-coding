#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T, d0, d1;
	long long int K;
	cin>>T;
	while(T--){
	    cin>>K>>d0>>d1;
	    long long int sum = d0 + d1;
	    int digit;
	    for(int i=3;i<=K;i++){
	        digit = sum%10;
	        sum += digit;
	        if(digit == 0) break;
	        if(digit == 2){
	            sum += ((K-i)/4)*20;
                int temp = (K-i)%4;
                if(temp==1) sum += 4;
                else if(temp==2) sum += 12;
                else if(temp==3) sum += 18;
                break;
	        }
	    }
	    if(sum%3) cout<<"NO"<<"\n";
	    else cout<<"YES"<<"\n";
	}
	return 0;
}
