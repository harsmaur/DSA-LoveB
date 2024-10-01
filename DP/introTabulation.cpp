#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Tabluation  Botom up space optimised

int main()
{
    int n;
    cin>>n;
    
    int prev = 1;
    int prev2 = 0;
    for(int i=2; i<=n; i++){
        int curri = prev + prev2;
        prev2 = prev;
        prev = curri;
    }
    cout<<prev;
    return 0;
}