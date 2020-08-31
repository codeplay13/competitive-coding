#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    // define data structures
    vector<vector<int>> adj; // adjacency list
    int n; // number of nodes -> n
    
    // DFS
    vector<bool> visited;
    void dfs(int v){
        visited[v] = true;
        for(int u: adj[v]){
            if(!visited[u]){
                dfs(u);
            }
        }
    }
    
    // DFS with entry and exit time;
    vector<int> mark, time_in, time_out;
    int counter=0;
    void dfs_timer(int v){
        mark[v] = 1;    // mark visited
        time_in[v] = counter++; // entry time of v
        for(int u: adj[v]){
            if(mark[u]==0){ // not visited
                dfs_timer(u);
            }
        }
        mark[v] = 2;    // exited
        time_out[v] = time_out++;   // exit time of v
    }
	return 0;
}
