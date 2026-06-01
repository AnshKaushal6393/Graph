#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    bool dfs(int u,vector<int>adj[],vector<bool>&visited,vector<bool>&pathVis){
        visited[u]=true;
        pathVis[u]=true;

        for(int v:adj[u]){
            if(!visited[v]){
                if(dfs(v,adj,visited,pathVis)) return true;
            } else if(pathVis[v]) return true;
        }
        pathVis[u]=false;
        return false;
    }
    bool isCyclic(int V,vector<int>adj[]){
        vector<bool> visited(V,false);
        vector<bool> pathVis(V,false);

        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(dfs(i,adj,visited,pathVis)) return true;
            }
        }
        return false;
    }
};