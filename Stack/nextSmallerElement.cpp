#include<iostream>
#include<vector>
#include<stack>
using namespace std;


vector<int> findNS(vector<int> & arr, int n){
      stack<int> s;
      vector<int> ans(n);

      for(int i = n-1; i>=0; i--){
        int curr = arr[i];
        // jab tak chota nhi milta pop
        while(s.top() >= curr){
            s.pop();
        }
         //chota mil gya store in ans and push curr in stack
        ans[i] = s.top();
        s.push(curr);
      }
      return ans;
}


//similary to find previos smaller element change loop condition flow
int main()
{
    
    return 0;
}