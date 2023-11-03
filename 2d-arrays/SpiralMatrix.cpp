class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();


        int count = 0;
        int total = row*col;
        
        // index initialization
        int StartingRow = 0;
        int StartingCol= 0;
        int EndingRow = row-1;
        int EndingCol = col-1;


        while(count < total){

            //print starting row
            for(int index= StartingCol; index <= EndingCol && count < total; index++){
             ans.push_back(matrix[StartingRow][index]);
             count++;
            }
            StartingRow++; // move to the next row

              //print ending col
            for(int index= StartingRow; index <= EndingRow && count < total; index++){
             ans.push_back(matrix[index][EndingCol]);
             count++;
            }
            EndingCol--; // move to the previous col 
           
            //print ending row
            for(int index= EndingCol; index >= StartingCol && count < total; index--){
             ans.push_back(matrix[EndingRow][index]);
             count++;
            }
            EndingRow--;   // move to the previos row

                //print starting col
            for(int index= EndingRow; index >= StartingRow && count < total; index--){
             ans.push_back(matrix[index][StartingCol]);
             count++;
            }
            StartingCol++; // moving to the next column




        }
        return ans;

    }
}; 