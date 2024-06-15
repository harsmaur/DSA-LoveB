class Solution {
  private:
    // Timer to keep track of discovery times of visited vertices
    int timer = 0;
    
    // Depth First Search function to find articulation points
    private: 
    void dfs(int node, int parent, vector<int> &vis, int tin[], int low[], vector<int> &mark, vector<int> adj[]) {
        vis[node] = 1;  // Mark the current node as visited
        
        // Initialize discovery time and low value
        tin[node] = low[node] = timer;
        timer++;
        
        int child = 0;  // Count of children in the DFS tree
        
        // Iterate over all adjacent vertices
        for(auto it: adj[node]) {
            if(it == parent) continue;  // If the adjacent node is the parent, skip it
            
            if(!vis[it]) {  // If the adjacent node has not been visited
                dfs(it, node, vis, tin, low, mark, adj);  // Recursive DFS call
                
                // Update the low value of the current node
                low[node] = min(low[node], low[it]);
                
                // Check if the current node is an articulation point the 
                if(low[it] >= tin[node] && parent != -1) {
                    mark[node] = 1;  // Mark the current node as an articulation point
                }
                child++;  // Increment the child count
            } else {
                // Update the low value of the current node for back edges
                low[node] = min(low[node], tin[it]);
            }
        }
        
        // If the current node is the root and has more than one child, it is an articulation point
        if(child > 1 && parent == -1) {
            mark[node] = 1;
        }
    }
  
  public:
    // Function to find all articulation points in the graph
    vector<int> articulationPoints(int V, vector<int> adj[]) {
        vector<int> vis(V, 0);  // Visited array to keep track of visited nodes
        int tin[V];  // Array to store the discovery times of visited vertices
        int low[V];  // Array to store the lowest discovery time reachable from the subtree
        vector<int> mark(V, 0);  // Array to mark articulation points
        
        // Initialize DFS traversal for all unvisited vertices
        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                dfs(i, -1, vis, tin, low, mark, adj);
            }
        }
        
        vector<int> ans;  // Vector to store the articulation points
        for(int i = 0; i < V; i++) {
            if(mark[i] == 1) {
                ans.push_back(i);
            }
        }
        
        // If no articulation points are found, return {-1}
        if(ans.size() == 0) {
            return {-1};
        } else {
            return ans;
        }
    }
};
