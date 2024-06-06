class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // minheap 
        priority_queue<pair<int, int> , vector<pair<int, int>> , greater<pair<int, int> >> pq;
        
        //distance array
        vector<int> dist(V, 1e9); // marked with infinit or very big value
        
        dist[S] = 0;
        
        pq.push({0,S});
        
        while(!pq.empty()){
            int dis = pq.top().first;
            int node = pq.top().second;
            
            pq.pop();
            
            for(auto it: adj[node]){
                int edgeWeight = it[1];
                int adjNode = it[0];
                
                if(dis + edgeWeight < dist[adjNode]){
                    dist[adjNode] = dis + edgeWeight;
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }
        return dist;
        
    }
};