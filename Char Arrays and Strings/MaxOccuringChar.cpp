#include<iostream>
using namespace std;

char MaxOccuringChar(string a){
    int arr[26] = {0};
    
//createing an arraow of count

    for(int i=0; i<a.length(); i++){
        char ch = a[i];
       int number = 0;
       //if in lowercase
       if(ch >='a' && ch <='z'){
         number = ch-'a';
       }
       else{ // if in uppercase
        number = ch-'A';
       }
       arr[number]++;
    }

int maxi  = -1;
int ans = 0;
for(int i=0; i<26; i++){
    if(maxi < arr[i]){
        ans = i;
        maxi = arr[i];
    }
}
char fimalAns = 'a' + ans;
return fimalAns;




}
int main()
{
    string s;
    cin>>s;
    cout<<MaxOccuringChar(s);
    return 0;
}