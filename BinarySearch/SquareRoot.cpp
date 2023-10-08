#include <iostream>
using namespace std;

int BinarySearch(int n){
    int s = 0;
    int e = n;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        int sqaure = mid*mid;

        if(sqaure == n){
            return mid;
        } 
        // lesser move to the right
        else if(sqaure < n){
            ans = mid;
            s = mid+1;
        }
        //greater move to the left
        else{
            e = mid-1;

        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main()
{ 
       int n;
       cin>>n;
    // Write your code here.
       cout<<BinarySearch(n);
    
    }