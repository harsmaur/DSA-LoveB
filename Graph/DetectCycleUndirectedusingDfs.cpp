#include<iostream>
using namespace std;
class Solution {
    
  private:
  
  bool dfs(int node, int parent, vector<int> adj[], int vis[]){
      
      vis[node] = 1;
      
      for(auto adjNode: adj[node]){
          
          if(!vis[adjNode]){
              bool cycle = dfs(adjNode, node, adj, vis);
              
              if(cycle) return true;
              
          }
          else if(adjNode != parent){
              return true;
          } 
      }
      return false;
  }
  
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
     
     int vis[V] = {0};
     
     for(int i=0; i<V; i++){
         if(!vis[i]){
              bool ans = dfs(i, -1, adj, vis);
              if(ans) return true;
         }
     }
     return false;
      
    }
};



int main()
{
    
    return 0;
}