class Solution{
    
    void heapify(vector<int> &arr, int size, int i){

        int n = size;
        int largest = i;
        int left = 2*i+1;
        int right = 2*i+2;

        if(left < n && arr[largest] < arr[left]){
            largest = left;
        }

        if(right < n && arr[largest] < arr[right]){
            largest = right;
        }

        if(largest != i){
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }


}
    public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        //this is a 0 based indexing solution
        //step 1 mrerge both arrays
        vector<int> ans;
     
        
        for(auto i: a){
            ans.push_back(i);
        }
         for(auto i: b){
            ans.push_back(i);
        }
        
        
        
        //step2 build heAP USING THE MERGED ARRAY
        
           //heap creation
           int k = ans.size();
             for(int i=k/2-1; i>=0; i--){ 
              heapify(ans , k, i );
          }
          
          
          
          
            return ans;
    }
};