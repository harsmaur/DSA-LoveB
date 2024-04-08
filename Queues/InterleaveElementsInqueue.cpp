class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        vector<int> ans;
        queue<int> new_q;
        int i =0;
        int n = q.size();
        
        //take first half values of q into new q
        while(i<n/2){
            new_q.push(q.front());
            q.pop();
            i++;
        }
        
      
        // now rearrange(interleave) first value of new q then value of q into ans vector 
        for(int j=0; j<n/2; j++){
            ans.push_back(new_q.front());
            new_q.pop();
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
        
        
        
      
        
    }
};