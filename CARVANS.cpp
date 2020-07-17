#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int arr[n], current_speed, count=1;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if (i==0){
	            current_speed = arr[i];
	        }
	        else if (arr[i]<=current_speed){
	            current_speed = arr[i];
	            count++;
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
