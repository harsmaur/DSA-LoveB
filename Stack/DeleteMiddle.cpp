#include <bits/stdc++.h> 
    
   void solve(stack<int>&inputStack,int count, int size){
      if(count == size/2){
         inputStack.pop();
         return;
      }

      // store the top value and pop (we will add this later to stack)
      int num = inputStack.top();
      inputStack.pop();

      //recursive call
      solve(inputStack, count+1, size);
      // ab jab wapas ayunga to wo stored value fir se atck me dal dunga
      inputStack.push(num);
   }


void deleteMiddle(stack<int>&inputStack, int N){
	
  int count = 0;
  solve(inputStack, count, N);
   
}