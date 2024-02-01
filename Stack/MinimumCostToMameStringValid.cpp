#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  
  //odd condition
  if(str.length()%2 == 1){
    return -1;
  }

  //remove valid part of string
  stack<char> s;
  for(int i =0; i<str.length(); i++){
      char ch = str[i];

      if(ch == '{'){
        s.push(ch);
      }
      else{
        // ch is close brace
         if(!s.empty() && s.top() == '{'){
            s.pop();
         }
         else{
           s.push(ch);
         }
      }
  }
  //now stack conatins only invalid braces

   //stack contains invalid expression
   int invalidOpen = 0, invalidClose = 0;
   while(!s.empty()){
     if(s.top() =='{'){
       invalidOpen++;
     }
     else{
       invalidClose++;
     }
     s.pop();
   }

   int ans = (invalidOpen+1)/2 + (invalidClose+1)/2;
   return ans;

}