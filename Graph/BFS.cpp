#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> bfstraversal(int V, vector<int> adj[]){
    int visi[V] = {0};

    visi[0] = 1;
    queue<int> q;
    q.push(0);

    vector<int> bfs;

    while(!q.empty()){
        int node = q.front();
        q.pop();

        bfs.push_back(node);

        for(auto it: adj[node]){
            if(!visi[it]){
                visi[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
}
int main()
{
    
    return 0;
}