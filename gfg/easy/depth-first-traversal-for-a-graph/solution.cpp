class Solution {
  public:
  
    void dfsUtil(int node, vector<vector<int>> &adj, vector<int> &vis, vector<int> &res) {
        vis[node] = 1;
        res.push_back(node);

        for (int neigh : adj[node]) {
            if (!vis[neigh]) {
                dfsUtil(neigh, adj, vis, res);
            }
        }
    }

    vector<int> dfs(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<int> vis(V, 0);
        vector<int> res;

        dfsUtil(0, adj, vis, res);

        return res;
    }
};