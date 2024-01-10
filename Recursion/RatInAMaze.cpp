#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution{
private:
    // Function to check if the movement to a cell is safe
    bool isSafe(int x, int y, int n, vector<vector<int>> visited , vector<vector<int>> &m){
        // Check if the coordinates are within bounds, cell is not visited, and it's accessible
        if((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1){
            return true; // Cell is safe for movement
        }
        else{
            return false; // Cell is not safe for movement
        }
    }
    
    // Recursive function to find paths
    void solve(vector<vector<int>> &m, int n, vector<string>& ans, int srcx, int srcy,vector<vector<int>> visited, string path ) {
        // If destination cell is reached, add the path to answers and return
        if(srcx == n-1 && srcy == n-1){
            ans.push_back(path);
            return;
        }
        
        // Mark the current cell as visited
        visited[srcx][srcy] = 1;
        
        // Attempt movements in four directions: down, left, right, up
        
        // Down movement
        int newx = srcx + 1;
        int newy = srcy;
        if(isSafe(newx, newy, n, visited, m)){
            path.push_back('D'); // Record the movement
            solve(m, n, ans, newx, newy, visited, path ); // Recursively check the path
            path.pop_back(); // Backtrack
        }
        
        // Left movement
        newx = srcx;
        newy = srcy - 1;
        if(isSafe(newx, newy, n, visited, m)){
            path.push_back('L');
            solve(m, n, ans, newx, newy, visited, path );
            path.pop_back();
        }
        
        // Right movement
        newx = srcx;
        newy = srcy + 1;
        if(isSafe(newx, newy, n, visited, m)){
            path.push_back('R');
            solve(m, n, ans, newx, newy, visited, path );
            path.pop_back();
        }
        
        // Up movement
        newx = srcx - 1;
        newy = srcy;
        if(isSafe(newx, newy, n, visited, m)){
            path.push_back('U');
            solve(m, n, ans, newx, newy, visited, path );
            path.pop_back();
        }
        
        // Mark the current cell as unvisited (backtracking)
        visited[srcx][srcy] = 0;
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans; // To store the paths
        
        // If the starting cell is blocked, return empty answer
        if(m[0][0] == 0){
            return ans;
        }
      
        int srcx = 0;
        int srcy = 0;
        string path = "";
        
        // Create a copy of the matrix to track visited cells
        vector<vector<int>> visited = m;
        
        // Initialize the visited matrix with zeros
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                visited[i][j] = 0;
            }
        }
        
        // Start the recursive function to find paths
        solve(m, n, ans, srcx, srcy, visited, path);
        
        // Sort the paths in lexicographical order
        sort(ans.begin(), ans.end());
        
        return ans; // Return the paths found
    }
};
