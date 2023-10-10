
bool isPossibleSoln(vector<int>& arr, int n, int m, int mid)
{
    int studentCount = 1;
    int PageSum = 0; //sum for each stduent how many pages have been allotted 

    for(int i=0; i<n; i++){
        if(PageSum + arr[i] <= mid){
            PageSum += arr[i]; //for the curernt student
            
        }
        else{
            studentCount++; // create new  student
            if(studentCount > m || arr[i] > mid){
                //check student count and mid
               return false;
            }
            //then for this student pagesum will be arr[i] 
            PageSum = arr[i];

        }
    }
    return true;
}



int findPages(vector<int>& arr, int n, int m) {

    if(m>n){
        return -1;
    }
    // Write your code here.

    int s = 0;
    int ans = -1;
    int sum = 0;
    for(int i =0; i<n;i++){
        sum += arr[i];
    }

    int e = sum;
    int mid = s+(e-s)/2;
   
    while(s<=e){

        if(isPossibleSoln(arr, n, m, mid)){
            ans = mid; // if soln exists then store in ans
            e = mid-1; //move to left
        }
        else{
            s = mid+1; //if soln doesnt exist move to right
        }
        mid = s+(e-s)/2;
    }
    return ans;
} 