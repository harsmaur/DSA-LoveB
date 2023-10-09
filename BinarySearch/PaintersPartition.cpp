
bool IsPossibleSoln(vector<int> &boards, int k, int mid) {
    
    int PainterCount = 1;
    int BoardLength = 0;

    for(int i =0; i< boards.size(); i++){

        if( BoardLength + boards[i] <= mid){
            BoardLength +=boards[i];
        }

        else{
            PainterCount++;
            if(PainterCount > k || boards[i] > mid){
                return false;
            }
            BoardLength = boards[i];
            
        }
    }
    return true;
}


int findLargestMinDistance(vector<int> &boards, int k) {
  //    Write your code here.
  int s = 0;
  int ans = -1;
  int sum = 0;
   for(int i = 0; i < boards.size(); i++){    
      sum += boards[i];
      }
      int e = sum;
      int mid = s+(e-s)/2;

      while(s<=e){
           
           if (IsPossibleSoln(boards, k, mid)){
               ans = mid;
               e = mid-1; 
           }
           else {
               s = mid+1;
           }
           mid = s+(e-s)/2;
      }
      return ans;
}