#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Memoization Top-Down
int f(int n, vector<int> dp){
    if(n<=1) return n;

    if(dp[n] != -1) return dp[n]; // stpe2 check condition 

    return dp[n] = f(n-1, dp) + f(n-2, dp); 
}


int main()
{
    int n;
    cin>>n;
     //step  1 declare the dp array 
    vector<int> dp(n+1, -1);
    cout<<f(n, dp);
    return 0;
}