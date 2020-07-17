#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	  ios_base::sync_with_stdio(false);
	  cin.tie(NULL);
    int n;
    cin>>n;
    long long int arr[n], ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n, greater<int>());
    for(int i=0;i<n;i++){
        arr[i] *= (i+1);
        if (arr[i]>ans){
            ans = arr[i];
        }
    }
    cout<<ans;
	  return 0;
}
