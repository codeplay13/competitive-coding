#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
	int n, m, input, mini, maxi, min=INT_MAX, max=INT_MIN;
	cin>>n>>m;
	for(int i=0;i<n;i++){
	    cin>>input;
	    if(max<input){
	        max = input;
	        maxi = i;
	    }
	}
	for(int i=0;i<m;i++){
	    cin>>input;
	    if(min>input){
	        min = input;
	        mini = i;
	    }
	}
	for(int i=0;i<n;i++) cout<<i<<" "<<mini<<"\n";
	for(int i=0;i<m;i++){
	    if(i!=mini) cout<<maxi<<" "<<i<<"\n";
	}
	return 0;
}
