
class Solution {
    private:
    bool check(int start, int V, vector<int>adj[], int color[]){
        
         
	    
	  
	    color[start] = 0;  // initial color to zero
	    
	    queue<int> q;
	    q.push(start);
	    
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        
	        for(auto it : adj[node]){
	            //if the adjacent node is not yet colored
	            // i have to give oppositye color of the node
	            if(color[it] == -1){
	                
	                color[it] = !color[node];
	                q.push(it);
	            } 
	            else if(color[it] == color[node]){
	            // if adjacent guy is having the same color then
	            // someone did colored it on some other path
	            
	            return false;
	            //not a bipartite graph
	            
	                
	            }
	        }
	    }
	    return true;
        
    }
public:
	bool isBipartite(int V, vector<int>adj[]){
	    
	    
	      int color[V];
	     for(int i=0; i<V; i++){
	        color[i] = -1;
	    }
	    
	    for(int i=0; i<V; i++){
	        if(color[i] == -1){
	            if(check(i, V, adj, color) == false){
	                return false;
	            }
	        }
	    }
	    
	    return true; // check all the components 
	    
	}
