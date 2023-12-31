#include<iostream>
using namespace std;

class Solution {
private:
   bool Valid(char ch){
       if( (ch >='a' && ch <='z') || (ch >='A' && ch <='Z') || (ch >='0' && ch <='9') ){
           return true;
       }
       else{
           return false;
       }
   }

 char toLowerCase(char ch){
     if((ch >= 'a' && ch <= 'z') || (ch >='0' && ch <='9')){
         return ch;
     }
     else{
         char temp = ch - 'A' + 'a';
         return temp;
     }
 }

 bool checkPalindrome(string a){
     int s = 0;
     int e = a.length()-1;
     while(s<=e){
         if(a[s] != a[e]){
           return false;
         }
         else{
              s++;
              e--;
         }
     }
     return true;
 }

public:
    bool isPalindrome(string s) {
        //remove non alphaNUMERIC CHARACTERS
        string temp = "";

        for(int j = 0; j< s.length(); j++){
            if(Valid(s[j])){
                temp.push_back(s[j]);
            }
        
        }
        //convert to lowercase for temp 
        for(int j = 0; j< temp.length(); j++){
            temp[j] = toLowerCase(temp[j]);
        
        }
        return checkPalindrome(temp);
    }
};

int main()
{
    Solution s;
    
    
    return 0;
}