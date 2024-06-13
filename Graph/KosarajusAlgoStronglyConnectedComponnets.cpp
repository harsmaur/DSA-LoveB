class Solution
{   private:
    void dfs(int node, vector<int> &vis,vector<vector<int>>& adj,
    stack<int> &st){
        vis[node] = 1;
        
        for(auto it: adj[node]){
            if(!vis[it]){
                dfs(it, vis, adj, st);
            }
        }
        
        st.push(node);
    }
    private:
    void dfs3(int node, vector<int> &vis, vector<int> adjT[]){
         vis[node] = 1;
        
        for(auto it: adjT[node]){
            if(!vis[it]){
                dfs3(it, vis, adjT);
            }
        }
    }
    
    
	public:
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<vector<int>>& adj)
    {
         // sort in finishing time
        vector<int> vis(V, 0);
        stack<int> st;
        for(int i=0; i<V;i++){
            
            if(!vis[i]){
                
                 dfs(i, vis, adj, st);
            }
        }
        
        //reversing the geaph
        
        vector<int> adjT[V];
        for(int i=0; i<V; i++){
             vis[i] = 0;
             for(auto it: adj[i]){
                 // i -> it
                 //we want it-> i edge
                 adjT[it].push_back(i);
                 
             }
        }
        
        //step3 
        int scc= 0;
        while(!st.empty()){
            
             int node = st.top();
             
             st.pop();
             
             if(!vis[node]){
                 scc++;
                 dfs3(node, vis, adjT);
             }
             
        }
        return scc;
        
    }
};