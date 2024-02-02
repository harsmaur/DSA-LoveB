#include<iostream>
#include<vector>
#include<stack>
using namespace std;


vector<int> findNS(vector<int> & arr, int n){
      stack<int> s;
      vector<int> ans(n);

      for(int i = n-1; i>=0; i--){
        int curr = arr[i];

        while(s.top() >= curr){
            s.pop();
        }

        ans[i] = s.top();
        s.push(curr);
      }
      return ans;
}
int main()
{
    
    return 0;
}