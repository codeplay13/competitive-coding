#include <bits/stdc++.h>
using namespace std;

int prec(char op){
    if(op == '^') return 3;
    else if(op == '*' or op == '/') return 2;
    else if(op == '+' or op == '-') return 1;
    else return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n;
	string infix;
	cin>>t;
	while(t--){
	    cin>>n;
	    cin>>infix;
	    stack<char> s;
	    string postfix;
	    for(int i=0;i<n;i++){
	        if(infix[i] == '(') s.push(infix[i]);
	        else if(isalpha(infix[i])) postfix += infix[i];
	        else if(infix[i] == ')'){
	            while(s.top() != '('){
	                postfix += s.top();
	                s.pop();
	            }
	            s.pop();
	        }
	        else{
	            while(!s.empty() and prec(infix[i])<=prec(s.top())){
	                postfix += s.top();
	                s.pop();
	            }
	            s.push(infix[i]);
	        }
	    }
	    while(!s.empty()){
	        postfix += s.top();
	        s.pop();
	    }
	    cout<<postfix<<"\n";
	}
	return 0;
}
