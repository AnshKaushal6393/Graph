#include<bits/stdc++.h>
using namespace std;
void dfs(int s,vector<int>adj[],vector<bool>&visited){
    visited[s]=true;
    cout<<s<<" ";

    for(int v:adj[s]){
        if(!visited[v]){
            dfs(v,adj,visited);
        }
    }
}
int main(){
    int V = 5;
    vector<int> adj[V];
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(0);
    adj[1].push_back(3);
    adj[1].push_back(4);
    adj[2].push_back(0);
    adj[3].push_back(1);
    adj[4].push_back(1);

    vector<bool> vis(V, false);

    dfs(0, adj, vis);

    return 0; 
}