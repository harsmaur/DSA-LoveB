#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]){
    //base case
    if(n == 0){
        return;
    }

    //extract the digits from number n
    int digit  = n%10;
    n = n/10;
    
   //rc
    sayDigit(n, arr);

     cout<<arr[digit]<<endl;

}

int main()
{
    int n;
    cin>>n;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    sayDigit(n, arr);

    return 0;
}