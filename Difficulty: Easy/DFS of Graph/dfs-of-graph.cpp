class Solution {
  public:
    void DFS(int start,vector<vector<int>>&adj,vector<bool>&vis,vector<int>&sol)
    {
        vis[start]=true;
        sol.push_back(start);
        for(auto&i:adj[start])
        {
            if(!vis[i])
            {
                DFS(i,adj,vis,sol);
            }
        }
        
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        vector<int>sol;
        int n=adj.size();
        vector<bool>vis(n,false);
       DFS(0,adj,vis,sol);
        // Code here
        return sol;
        
    }
};