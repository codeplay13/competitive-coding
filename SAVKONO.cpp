#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;  
    cin>>t;
    while(t--){
        // int n, z, a;
        // vector<int> powers(10000, 0);
        // cin>>n>>z;
        // while(n--){
        //     cin>>a;
        //     powers[a]++;
        // }
        // for(int i=10000;i>0;i--){
        //     while(powers[i] and z>0){
        //         ++n;
        //         z -= i;
        //         --powers[i];
        //         ++powers[i/2];
        //     }
        //     if(z<0) break;
        // }
        // if(z<0) cout<<n+1<<"\n";
        // else cout<<"Evacuate\n";
    
        int n, z, a;
        priority_queue<int> powers;
        cin>>n>>z;
        while(n--){
            cin>>a;
            powers.push(a);
        }
        while(1){
            ++n;
            a = powers.top();
            powers.pop();
            z -= a;
            powers.push(a/2);
            if(z<=0){
                cout<<n+1<<"\n";
                break;
            }
            if(powers.top()==0){
                cout<<"Evacuate\n";
                break;
            }
        }
    }
    return 0;
}
