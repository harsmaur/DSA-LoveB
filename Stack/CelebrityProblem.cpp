#include<iostream>
using namespace std;


class Solution 
{
    private:
    bool knows(vector<vector<int> >& M, int a, int b, int n){
        if(M[a][b] == 1){
            return true;
        }else{
           return false; 
        }
        
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        //CREATE A STACK
        stack<int> s;
        //push all elements in stack 
        for(int i=0; i<n; i++){
            s.push(i);
        }
        
        //step2 WHILE SIZE is not 1 
         while(s.size() > 1){
             int a = s.top();
             s.pop();
             int b = s.top();
             s.pop();
             
             if(knows(M,a,b,n)){
                 s.push(b);
             }else{
                 s.push(a);
             }
         }
        //  step3
         int candidate = s.top();
        //verify the single element left in the stack though its zeroCount and oneCount.
        
         int zeroCount = 0;
         for(int i=0; i<n; i++){
             if(M[candidate][i] == 0){
                 zeroCount++;
             }
         }
         
         if(zeroCount != n ){
             return -1;
         }
         
         
         int oneCount = 0;
         for(int i=0; i<n; i++){
             if(M[i][candidate] == 1){
                 oneCount++;
             }
         }
         
         
         if(oneCount != n-1){
             return -1;
         }
         return candidate;
         
         
    }
};