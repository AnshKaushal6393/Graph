#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    bool solve(vector<vector<int>>&graph,int curr,vector<int>&color,int currColor){
        queue<int>q;
        q.push(curr);
        color[curr] = currColor;

        while(!q.empty()){
            int u = q.front();
            q.pop();

            for(int &v:graph[u]){
                if(color[v] == color[u]) return false;

                if(color[v] == -1){
                    color[v] = 1 - color[u];
                    q.push(v);
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>> &graph){
        int V = graph.size();
        vector<int>color(V,-1);
        for(int i=0;i<V;i++){
            if(color[i] == -1){
                if(solve(graph,i,color,1) == false) return false;
            }
        }
        return true;
    }
};