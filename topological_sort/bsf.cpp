// KAHN'S Algorithm

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> topoSort(int V, vector<int> adj[])
    {
        vector<int> indegree(V, 0);
        for (int i = 0; i < V; i++)
        {
            for (auto v : adj[i])
            {
                indegree[v]++;
            }
        }
        queue<int> q;
        for (int i = 0; i < V; i++)
        {
            if (indegree[i] == 0)
                q.push(i);
        }
        vector<int>ans;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            ans.push_back(u);

            for(auto v:adj[u]){
                indegree[v]--;

                if(indegree[v]==0) q.push(v);
            }
        }

        return ans;
    }
};