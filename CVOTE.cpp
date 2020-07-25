#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n, m;
	string name, country;
	unordered_map<string, string> name_country;
	unordered_map<string, int> country_count, name_count;
	cin>>n>>m;
	while(n--){
	    cin>>name>>country;
	    name_country.insert({name, country});
	}
	while(m--){
	    cin>>name;
	    name_count[name]++;
	    country_count[name_country[name]]++;
	}
	for(auto i: country_count){
	    if(i.second>m){
	        m = i.second;
	        country = i.first;
	    }
	    else if(i.second==m) country = min(country, i.first);
	}
	m = -1;
	for(auto i: name_count){
	    if(i.second>m){
	        m = i.second;
	        name = i.first;
	    }
	    else if(i.second==m) name = min(name, i.first);
	}
	cout<<country<<"\n"<<name;
	return 0;
}
