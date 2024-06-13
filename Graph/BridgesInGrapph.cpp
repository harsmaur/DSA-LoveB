class Solution {
    // Private member variable to keep track of discovery times of visited vertices
    private: 
    int timer = 1;

    // Private member function to perform DFS and find bridges
    private:    
    void dfs(int node, int parent, vector<int> adj[], vector<int> &vis, int tin[], int low[], vector<vector<int>> &bridges) {
        // Mark the current node as visited
        vis[node] = 1;

        // Initialize discovery time and low value
        tin[node] = low[node] = timer;
        timer++;

        // Traverse all adjacent vertices
        for(auto it: adj[node]) {
            // If the adjacent vertex is the parent, skip it
            if(it == parent){
                continue;
            }

            // If the adjacent vertex is not visited
            if(vis[it] == 0){
                // Recur for the adjacent vertex
                dfs(it, node, adj, vis, tin, low, bridges);

                // Check if the subtree rooted at 'it' has a connection back to one of the ancestors of 'node'
                low[node] = min(low[node], low[it]);

                // If the lowest vertex reachable from subtree under 'it' is below 'node' in DFS tree, then 'node-it' is a bridge
                if(low[it] > tin[node]){
                    bridges.push_back({node, it});
                }
            }
            else { // If the adjacent vertex is already visited and is not parent of current vertex
                // Update low value of 'node' for parent function calls
                low[node] = min(low[node], low[it]);
            }
        }
    }

    public:
    // Public member function to find all bridges in the graph
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        // Create the graph as an adjacency list
        vector<int> adj[n];
        for(auto it: connections) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }

        // Initialize visited array
        vector<int> vis(n, 0);

        // Arrays to store discovery times of visited vertices and earliest visited vertex reachable from subtree
        int tin[n];
        int low[n];

        // Vector to store all bridges
        vector<vector<int>> bridges;

        // Perform DFS from vertex 0 (assuming the graph is connected)
        dfs(0, -1, adj, vis, tin, low, bridges);

        // Return the list of bridges
        return bridges;
    }
};
