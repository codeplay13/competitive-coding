#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

string response;

int squareBaseSearch(int low, int high){
    while(low<high){
        int mid = low + (high-low)/2;
        cout<<"? "<<mid<<" "<<0<<"\n";
        fflush(stdout);
        cin>>response;
        if(response == "YES"){
            low = mid+1;
        }
        else {
            high = mid;
        }
    }
    return low-1;
}

int triangeHeightSearch(int low, int high){
    while(low<high){
        int mid = low + (high-low)/2;
        cout<<"? "<<0<<" "<<mid<<"\n";
        fflush(stdout);
        cin>>response;
        if(response == "YES"){
            low = mid+1;
        }
        else {
            high = mid;
        }
    }
    return low-1;
}

int triangleBaseSearch(int low, int high, int y){
    while(low<high){
        int mid = low + (high-low)/2;
        cout<<"? "<<mid<<" "<<y<<"\n";
        fflush(stdout);
        cin>>response;
        if(response == "YES"){
            low = mid+1;
        }
        else {
            high = mid;
        }
    }
    return low-1;
}

int main() {
    int squareBase = squareBaseSearch(1, 1001);
    int triangeHeight = triangeHeightSearch(2*squareBase, 1001);
    int triangleBase = triangleBaseSearch(squareBase, 1001, 2*squareBase);
    int S = (4*squareBase*squareBase)+(triangleBase*(triangeHeight-(2*squareBase)));
    cout<<"! "<<S;
	return 0;
}
