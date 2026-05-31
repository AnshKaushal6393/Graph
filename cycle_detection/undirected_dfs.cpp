#include <vector>
using namespace std;
class Solution {
    public:
    bool dfs(int u,int parent,vector<int>adj[],vector<bool>&visited){
        visited[u]=true;

        for(int v:adj[u]){
            if(!visited[v]){
                if(dfs(v,u,adj,visited)) return true;
            } else if(v!=parent) return true;
        }
        return false;
    }
    bool isCyclic(int V, vector<vector<int>>&edges){
        vector<int>adj[V];

        for(auto&e:edges){
            int u=e[0],v=e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool>visited(V,false);

        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(dfs(i,-1,adj,visited)) return true;
            }
        }
        return false;
    }
};