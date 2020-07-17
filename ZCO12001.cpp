#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, input, nd=0, pnd=0, lms=0, plms=0, prev_empty_i=-1, s=0;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>input;
	    if(input==1){
	        s++;
	        if(s>nd){
	            nd = s;
	            pnd = i+1;
	        }
	    } 
	    else{
            s--;
            if(s==0){
                if(i-prev_empty_i>lms){
                    lms = i-prev_empty_i;
                    plms = i+2-lms;
                }
                prev_empty_i = i;
            }
	    }
	}
	cout<<nd<<" "<<pnd<<" "<<lms<<" "<<plms;
	return 0;
}
