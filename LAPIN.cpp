#include <bits/stdc++.h>
using namespace std;

void is_lapin(string left, string right, int half_len){
    vector<int> l(26, 0);
    vector<int> r(26, 0);
    for(int i=0;i<half_len;i++){
        l[left[i]-97]++;
        r[right[i]-97]++;
    }
    if (l == r){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int len = s.length();
	    if (len%2){
	        is_lapin(s.substr(0, len/2), s.substr((len/2) + 1, len/2), len/2);
	    }
	    else{
	        is_lapin(s.substr(0, len/2), s.substr(len/2, len/2), len/2);
	    }
	}
	return 0;
}
