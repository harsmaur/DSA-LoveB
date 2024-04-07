#include<iostream>
using namespace std;


class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        stack<int>s;
        
        for(int i=0; i<k; i++){
            int element = q.front();
            q.pop();
            s.push(element);
        }
        
        while(!s.empty()){
            int element = s.top();
            s.pop();
            q.push(element);
        }
        
        //fetch frst n-k elements from queue and pushback
        int t = q.size() - k;
        while(t--){
            int element = q.front();
            q.pop();
            q.push(element);
        }
        
        return q;
        
    }
};