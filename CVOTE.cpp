#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n, m, max=-1;
	string s1, s2, name, country;
	unordered_map<string, string> name_country;
	unordered_map<string, int> country_count, name_count;
	cin>>n>>m;
	while(n--){
	    cin>>s1>>s2;
	    name_country.insert({s1, s2});
	}
	while(m--){
	    cin>>s1;
	    name_count[s1]++;
	    country_count[name_country[s1]]++;
	}
	for(auto i: country_count){
	    if(i.second>max){
	        max = i.second;
	        country = i.first;
	    }
	    else if(i.second==max) country = min(country, i.first);
	}
	max = -1;
	for(auto i: name_count){
	    if(i.second>max){
	        max = i.second;
	        name = i.first;
	    }
	    else if(i.second==max) name = min(name, i.first);
	}
	cout<<country<<"\n"<<name;
	return 0;
}
