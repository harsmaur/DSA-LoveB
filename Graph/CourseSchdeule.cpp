
class Solution
{
  public:
    vector<int> findOrder(int V, int m, vector<vector<int>> prerequisites) 
    {
            //first create a graph from the prerequisites given 
	    vector<int> adj[V];
	    
	    for(auto it: prerequisites){
	        adj[it[1]].push_back(it[0]);    // 1--->0
	    }
	    
	    //topological sort 
	    int indegree[V] = {0};
	    
	    for(int i =0;i < V; i++){
	        
	        for(auto it: adj[i]){
	            indegree[it]++;
	        }
	    }
	    
	    
	    queue<int> q;
	    
	    for(int i=0; i<V; i++){
	        if(indegree[i] == 0){
	            q.push(i);
	        }
	    }
	    
	    vector<int> topo;
	    
	    while(!q.empty()){
	        int node = q.front();
	        
	        q.pop();
	        
	        topo.push_back(node);
	        
	        for(auto it : adj[node]){
	            indegree[it]--;
	            if(indegree[it] == 0) q.push(it);
	        }
	    }
	    
	    
	    if(topo.size() == V) {  // means this graph is dag and therefore no cycic dependencies 
	        return topo; // return the topo 
	    }
	    return {}; //else return empty array 
	}
    
};