#include<iostream>
using namespace std;

void reverseString(string &str, int s, int e){
    if(s>e){
        return ;
    }

    swap(str[s], str[e]);
    s++;
    e--;
    reverseString(str, s, e);
}

// void reverseString2(string &str, int s){
//     int n = str.length()-1;
//     if(s>n){
//         return ;
//     }

//     swap(str[s], str[n-s-1]);
//     s++;
//     n-s;
//     reverseString(str, s, n);
// }


int main()
{
    string str = "abcde";
    cout<<str<<endl;
    reverseString(str, 0, str.length()-1);
    cout<<str<<endl;
    // reverseString2(str, 0);
    // cout<<str<<endl;
    return 0;
}