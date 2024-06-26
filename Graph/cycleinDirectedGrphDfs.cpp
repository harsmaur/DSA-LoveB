
class Solution { 
  private:
  bool dfsCheck(int node, vector<int> adj[], int vis[], int pathVis[]){
      
      vis[node] = 1;
      
      pathVis[node] = 1;
      
      //traverse for adjacent nodes
      for(auto it: adj[node]){
          
          // the node is not visited
          if(!vis[it]){
              
              if(dfsCheck(it, adj, vis, pathVis) == true) return true;
              
          } 
          // if the node has been prviously visited 
          //but it has to be visited on the same path
          else if(pathVis[it]){
              return true;
          }
      }
      pathVis[node] = 0;  //on returning back
      return false;
  }
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        int vis[V] =  {0};
        int pathVis[V] = {0};
            
        for(int i=0; i<V ;i++){
            
            if(!vis[i]){
                if(dfsCheck(i, adj ,vis, pathVis) == true) return true;
            }
        }
        return false;
       
  }
};
