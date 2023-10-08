#include <iostream>
using namespace std;

int Sqroot(int n){
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

double morePrecision(int n, int tempSoln, int precision){
    double factor = 1;

    //0.1
    //0.01
    //0.001
    double ans = tempSoln; 

    for(int i=0; i<precision; i++){
        factor = factor/10;

        for(double j = ans; j*j<n; j = j+factor){
            ans = j; 
        }
    }
    return ans;
}
int main()
{ 
       int n;
       cin>>n;
    // Write your code here.
       int tempSoln = Sqroot(n);
       cout<< "Answer is " << morePrecision(n, 3, tempSoln);
    
    }