#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for(int col = 0; col < mCols; col++)
    {
        if(col&1){
            // if odd col then go from bottom to top
             for( int row = nRows-1; row >= 0; row--){
                 cout<<arr[row][col]<<endl;
                 ans.push_back(arr[row][col]);
             }
        }
        else{
            // if even go from top to bottom
             for( int row = 0; row < nRows; row++){
                 cout<<arr[row][col]<<endl;
                 ans.push_back(arr[row][col]);
             }
        }
    }
    return ans;
}