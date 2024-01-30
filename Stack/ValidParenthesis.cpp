#include<iostream>
using namespace std;

bool valid(string s){
    if(s.size() == 0){
        return true;
    }

    stack<char> st;

    for(int i =0; i< s.size(); i++){
        //if opening bracket then push to the stack
        if(s[i] == '(' || s[i] == '{' || s[i] == ''){
            st.push(s[i]);
        }else if ( (s[i] == ')' && !st.empty() && st.top() == s[i]) ||
                   (s[i] == '}' && !st.empty() && st.top() == s[i]) ||
                   (s[i] == ']' && !st.empty() && st.top() == s[i])
                   ){
                     
                     //if closing bracket and stack not empty
                     st.pop();
                  
        }else{
        return false;
       }
    }
    return st.empty(); // returns true if empty stack else returns false
    }


int main()
{
    
    return 0;
}