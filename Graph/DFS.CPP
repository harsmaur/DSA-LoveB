#include<iostream>
#include<vector>
using namespace std;

void dfs(int node, vector<int> &ls, vector<int> adj[], int visi[]){
    //mark start node visited
    visi[node] = 1;

    //push in the ls
    ls.push_back(node);

    //travel for all the nodes neighbour
    for(auto it: adj[node]){

        //if not visited then visit
        if(!visi[it]){
            //recurive call for depth
            dfs(it, ls, adj, visi);
        }
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[]){
    //create a 0 filled visited arary
    int visi[V] = {0};

    int start = 0; // 0 as start node

    vector<int> ls;

    dfs(start, ls, adj, visi);

    return ls;
}
int main()
{
    

    return 0;
}