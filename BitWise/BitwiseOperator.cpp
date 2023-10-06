#include <iostream>
using namespace std;


int main(){
    int a = 2, b = 4;
    cout<<(a&b) <<endl; //and
    cout<<(a|b) <<endl; //or 
    cout<<(~a) <<endl; //not
    cout<<(a^b) <<endl; //xor
    cout<<" left shift of 5 "<<(5<<1)<<endl;
    cout<<" left shift of 17 by 1 "<<(17<<1)<<endl;
    cout<<" left shift of 19 byt 2 "<<(19<<2)<<endl;
    return 0;
}