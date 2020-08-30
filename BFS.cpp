#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    // define data structures
    vector<vector<int>> adj; // adjacency list
    int n, s; // number of nodes -> n, source -> s
    queue<int> frontier; // to store vertices to be visited
    vector<bool> used(v); // visted or not
    vector<int> dist(v), parent(v); // distance and parent vector, for shortest path
    
    // push root/start node
    frontier.push(s);
    used[s] = true;
    parent[s] = -1;
    
    // BFS
    while(!frontier.empty()){
        int v = frontier.front();
        frontier.pop();
        for(int u: adj[v]){
            if(!used[u]){
                used[u] = true;
                frontier.push(u);
                dist[u] = dist[v] + 1;
                parent[u] = v;
            }
        }
    }
    
    // shortest path from source to node 'u'
    if(!used[u]) cout<<"No way buddy!";
    else{
        vector<int> path;
        for(int v=u;v!=-1;v=parent[v]) path.push_back(v);
        reverse(path.begin(), path.end());
        cout<<"Path: \n";
        for(auto i: path) cout<<i<<" ";
    }
	return 0;
}
