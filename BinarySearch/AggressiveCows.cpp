
bool IsPOssible(vector<int> &stalls, int k, int mid){
    int CowCount = 1;
    int LastPosition = stalls[0];

    for(int i=0; i< stalls.size(); i++){

        if(stalls[i] - LastPosition >= mid){
           
             CowCount++;
            if(CowCount == k){
               return true;
            }
            LastPosition = stalls[i];
        }
        
    }
    return false;
}



int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());

    int maxi = -1;
    for(int i=0; i<stalls.size(); i++){
         maxi = max(maxi, stalls[i]);
    }

    int s = 0;
    int e = maxi;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){

        if(IsPOssible(stalls, k , mid)){
           ans = mid;
           s = mid+1;
        } 
        else{
         e = mid-1;
        }
        mid = s+(e-s)/2;

    }
    return ans;
}