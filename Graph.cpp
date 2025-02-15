#include <iostream>
#include <vector>
using namespace std;
//! Representation

//? Adjacency Matrix
class Graph
{
    vector<vector<int>> adj_mat;

public:
    Graph(int n)
    {
        adj_mat = vector<vector<int>>(n, vector<int>(n, 0));
    }
    void add_edge(int u, int v)
    {
        adj_mat[u][v] = 1;
        adj_mat[v][u] = 1;
    }
}

//? Adjacency List
class Graph
{
    map<int, list<int>> adjList;

public:
    void add_edge(int u, int v)
    {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}

// Breadth First Search Traversal
class Solution
{
public:
    vector<int> bfs(int V, vector<int> adj[])
    {
        int vis[n] = {0};
        vis[0] = 1;
        queue<int> q;
        q.push(0);
        vector<int> bfs;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            bfs.push(node);

            for (auto it : adj[node])
            {
                if (!vis[it])
                {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
}
// Depth First Search
class Solution
{
public:
    vector<int> dfs(int V, vector<int> adj[])
    {
        int vis[n] = {0};
        int start = 0;
        vector<int> ls;
        solve(start, adj, vis, ls);
        return ls;
    }
    void solve(int node, vector<int> adj[], int vis[], vector<int> &ls)
    {
        vis[node] = 1;
        ls.push_back(node);
        for (auto id : adj[node])
        {
            if (!vis[id])
                solve(it, adj, vis, ls);
        }
    }
}