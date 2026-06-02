#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    void dfs(int u,vector<int>adj[],vector<bool>&visited,stack<int>&st){
        visited[u]=true;

        for(auto v:adj[u]){
            if(!visited[v]) dfs(v,adj,visited,st);
        }

        st.push(u);
    }
    vector<int> topoSort(int V,vector<int>adj[]){
        vector<bool>visited(V,false);
        stack<int>st;

        for(int i=0;i<V;i++){
            if(!visited[i]) dfs(i,adj,visited,st);
        }

        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};