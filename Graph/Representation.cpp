#include<iostream>
#include<vector>
using namespace std;

int main()
{

    //Adjacency Matrix
    int n, m;
    cin>> n >> m;
    //n is the number of nodes m is the edges

    //Graph Store
    int adj[n+1][m+1];
    //adj matrix 

    for(int i=0; i<m; i++){
        int u, v; // u and v are two nodes
        cin>> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }


    //Adjacency list

    //input would be same

    //store
    vector<int> adjList[n+1];
    
    for(int i=0; i<m; i++){
        int u,v;
        cin >> u >> v;
        adjList[u].push_back(v); // on the uth index store the node v
        adjList[v].push_back(u); // on the vth index store the node u
    }
    
    return 0;
}