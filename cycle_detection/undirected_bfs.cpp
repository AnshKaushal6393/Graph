#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool bfs(int s,vector<int>adj[],vector<bool>&visited){
        queue<pair<int,int>>q;
        visited[s]=true;
        q.push({s,-1});

        while(!q.empty()){
            auto [u,parent] = q.front();
            q.pop();

            for(int v:adj[u]){
                if(!visited[v]){
                    visited[v]=true;
                    q.push({v,u});
                }else if(v!=parent) {
                    return true;
                }
            }
        }
        return false;
    }
    bool isCyclic(int V,vector<int>adj[]){
        vector<bool> visited(V,false);
        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(bfs(i,adj,visited)) return true;
            }
        }
        return false;
    }
};