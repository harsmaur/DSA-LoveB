#include<iostream>
using namespace std;


class Solution {
public:
    void reverseString(vector<char>& s) {
       stack<char> ch;

       for(int i =0; i< s.size(); i++){
           ch.push(s[i]);
       }

       s.clear();
       while(!ch.empty()){
           s.push_back(ch.top());
           ch.pop();
       }



    }
};