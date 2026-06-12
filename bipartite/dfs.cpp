#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    bool checkBipartite(vector<int>adj[],int curr,vector<int>&color,int currColor){
        color[curr] = currColor;
        for(auto v:adj[curr]){
            if(color[v] == color[curr]) return false;

            if(color[v] == -1){
                int colorOfV = 1 - currColor;

                if(checkBipartite(adj,v,color,colorOfV) == false) return false;
            }
        }
        return true;
    }
    bool isBipartite(int V,vector<int>adj[]){
        vector<int>color(V,-1);
        
        for(int i=0;i<V;i++){
            if(color[i]==-1){
                if(checkBipartite(adj,i,color,1) == false) return false;
            }
        }
        return true;
    }
};