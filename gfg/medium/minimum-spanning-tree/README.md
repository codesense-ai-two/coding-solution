# Minimum Spanning Tree

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a weighted, undirected, and connected graph with V vertices and E edges, your task is to find the sum of the weights of the edges in the Minimum Spanning Tree (MST) of the graph. The graph is provided as a list of edges, where each edge is represented as [u, v, w], indicating an edge between vertex u and vertex v with edge weight w.

```
Input: V = 3, E = 3, Edges = [[0, 1, 5], [1, 2, 3], [0, 2, 1]]
 
Output: 4
Explanation:

The Spanning Tree resulting in a weight
of 4 is shown above.
```

```
Input: V = 2, E = 1, Edges = [[0 1 5]]

 

Output: 5 
Explanation: Only one Spanning Tree is possible which has a weight of 5.

```

**Constraints:
**2 ≤ V ≤ 1000
V-1 ≤ E ≤ (V*(V-1))/2
1 ≤ w ≤ 1000
The graph is connected and doesn't contain self-loops & multiple edges.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-06-20T17:39:12.672Z  

```cpp
class Solution {
  public:
  
    struct DSU {
        vector<int> parent, rank;
        
        DSU(int n) {
            parent.resize(n);
            rank.resize(n, 0);
            for (int i = 0; i < n; i++) parent[i] = i;
        }
        
        int find(int x) {
            if (parent[x] == x) return x;
            return parent[x] = find(parent[x]);
        }
        
        bool unite(int a, int b) {
            a = find(a);
            b = find(b);
            
            if (a == b) return false;
            
            if (rank[a] < rank[b]) swap(a, b);
            
            parent[b] = a;
            if (rank[a] == rank[b]) rank[a]++;
            
            return true;
        }
    };
    
    int spanningTree(int V, vector<vector<int>>& edges) {
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/minimum-spanning-tree/1)