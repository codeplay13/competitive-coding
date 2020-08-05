#include <iostream>
#include <vector>
using namespace std;

long long int ans = 0;

void merge(vector<int> &L, vector<int> &R, vector<int> &S){
    int i=0, j=0;
    while(i<L.size() and j<R.size()){
        if(L[i]<=R[j]) S.push_back(L[i++]);
        else{
            ans += L.size()-i;
            S.push_back(R[j++]);
        }
    }
    while(i<L.size()) S.push_back(L[i++]);
    while(j<R.size()) S.push_back(R[j++]);
}

void merge_sort(int A[], int l, int r){
    if(l<r){
        int mid = l + (r-l)/2;
        merge_sort(A, l, mid);
        merge_sort(A, mid+1, r);
        vector<int> L, R, S;
        for(int i=l;i<=mid;i++) L.push_back(A[i]);
        for(int i=mid+1;i<=r;i++) R.push_back(A[i]);
        merge(L, R, S);
        for(int i=0;i<S.size();i++) A[l+i] = S[i];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++) cin>>A[i];
	merge_sort(A, 0, n-1);
	cout<<ans;
	return 0;
}
