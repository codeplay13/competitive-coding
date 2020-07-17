#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T, activities;
	string origin;
	cin>>T;
	while(T--){
	    cin>>activities>>origin;
	    int laddus=0;
	    while(activities--){
	       int num;
	       string activity;
	       cin>>activity;
	       if (activity == "CONTEST_WON"){
	           cin>>num;
	           if (num > 20) num = 20;
	           laddus += 300 + (20 - num);
	       }
	       else if (activity == "BUG_FOUND"){
	           cin>>num;
	           laddus += num;
	       }
	       else if (activity == "TOP_CONTRIBUTOR"){
	           laddus += 300;
	       }
	       else if (activity == "CONTEST_HOSTED"){
	           laddus += 50;
	       }
	    }
	    if (origin == "INDIAN") cout<<laddus/200<<"\n";
	    else cout<<laddus/400<<"\n";
	}
	return 0;
}
