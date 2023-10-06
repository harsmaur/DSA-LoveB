#include<iostream>
#include<math.h>
using namespace std;

int setbits(int a){
    int count = 0;
    while(a!=0){
       if(a&1){
        count++;
       }
       a = a>>1;
       

    }
    return count;
}
int main()
{
    cout<<setbits(5);
    return 0;
}