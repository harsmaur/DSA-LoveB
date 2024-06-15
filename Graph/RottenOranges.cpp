#include<iostream>
using namespace std;

#include<vector>
#include<queue>
#include<utility>
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n = grid.size(); // no. of rows 
        int m = grid[0].size(); // no of colums in first row of grid
        
        queue<pair<pair<int, int>, int>> q;
        // ({row, col}, time}
        
        int visi[n][m];
        
        int countFresh = 0;
        //push the rotten oranges into the queue along with time 0
        for(int i=0; i<n; i++){
            
            for(int j=0; j<m;  j++){
                
                if(grid[i][j] == 2){
                    
                    q.push({{i, j}, 0});
                    visi[i][j] = 2;
                }else{
                    visi[i][j] = 0;
                }
                
                if(grid[i][j] == 1){
                    countFresh++;
                }
            }
        }
        
        int time = 0;
        int drow[] =  {-1, 0, +1, 0};
        int dcol[] =  {0,  +1, 0, -1};
        int cnt = 0;
        while(!q.empty() ){
            //take a rotten orange (i, j, tm) 
            int r = q.front().first.first;
            int c = q.front().first.second;
            int tm = q.front().second;
            
            time = max(time, tm);
            
            q.pop();
            
            //visit all the neghbr cells of that rotten orange 
            for(int i=0; i<4; i++){ 
                int neghbrRow = r+drow[i];
                int neghbrCol = c+dcol[i];
                
                if(neghbrRow>=0 && neghbrRow < n && neghbrCol>=0 && neghbrCol < m 
                && visi[neghbrRow][neghbrCol] != 2 && grid[neghbrRow][neghbrCol]==1){
                    //not alreqdy rotten and fresh orange then
                    q.push({{neghbrRow, neghbrCol}, tm+1}); // push in queue
                    
                    visi[neghbrRow][neghbrCol] = 2; // rotten the orange
                    cnt++;
                }
            }
        }
        if(countFresh!=cnt){ // check if all the the fresh oranges have been rotten or not
            return -1;
        }
        return time;
        
    }
};