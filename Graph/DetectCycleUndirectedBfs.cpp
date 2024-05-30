#include<iostream>
using namespace std;

bool detect(int src; vector<int> adj[], int visi[]){
    visi[src] = 1;
    
    queue<pair<int, int>> q;
    q.push({src, -1});

    while(!q.empty()){
        int node = q.front().first;
        int parent = q.front().second;

        q.pop();

        for(auto adjNode : adj[node]){
            if(!visi[adjNode]){
                visi[adjNode] = 1;
                q.push({adjNode, node});
            }else if(parent != adjNode){
                return true;
            }
        }
    }
    return false;

}
bool isCycle(vector<int> adj[], int V){
    int visi[V] = {0};

    for(int i=0; i<V; i++){
        if(!visi[i]){
            if(detect(i, adj, visi)) return true;
        }
    }
    return false
}

