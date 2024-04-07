#include<iostream>
using namespace std;


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                    
   deque<long long int> dq; // store negative numbers index in deque
   vector<long long > ans; 
   
   //process the first window of k size
   for(int i=0; i<K; i++){
       if(A[i] < 0){
           dq.push_back(i); // store that index
       }
   }
   
   //store the answer of first k size window
   if(dq.size()>0){
       ans.push_back(A[dq.front()]);
   }
   else{
       ans.push_back(0);
       }
   
   
   //process for remianing windows
   for(int i= K ;i<N; i++){
       
       //removal
       if(!dq.empty() && (i-dq.front()) >= K){
           dq.pop_front();
       }
       
       //addition
       if(A[i] < 0){
           dq.push_back(i);
       }
       
       //store the answer of first k size window
     if(dq.size()>0){
       ans.push_back(A[dq.front()]);
      }
      else{
       ans.push_back(0);
       }
   }
   
   
       
      
    return ans;
 }