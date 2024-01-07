#include<iostream>
using namespace std;

bool checkPalindrome(string str, int s, int e){
    //base case
    if(s>e){ // entire string is checked and valid so return true
        return true;
    }
    if(str[s] != str[e]){
        return false;
    }
    else{
       return checkPalindrome(str, s+1, e-1);
    }
 
    
}
int main()
{
    string str = "aabbaas";

    if(checkPalindrome(str, 0, str.length()-1)){
        cout<<"Valid"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
    return 0;
}