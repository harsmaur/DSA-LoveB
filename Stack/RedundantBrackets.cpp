#include<iostream>
using namespace std;



bool findredundant(string &s){

    stack<char> st;

    for(int i= 0;i <s.length(); i++){

        char ch = s[i];
                // Opening bracket or operator, then push to stack
        if(ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*'){
            st.push(ch);
        }
        else{
            //closing bracket or lower case letter( letter ignored)
            if(ch ==')'){
                bool redundant = true;
        
                //until an opening bracket is found search for a operator
                while(st.top() != '('){
                    char top = st.top();
                      if( top == '+' || top == '-' || top == '/' || top == '*'){
                       
                        redundant = false;
                      }
                      st.pop()
                }

                if(redundant){
                    return true;
                }
                st.pop(); // pop the opening bracket
            }
        }
    }
    return false;
}
int main()
{
    
    return 0;
}