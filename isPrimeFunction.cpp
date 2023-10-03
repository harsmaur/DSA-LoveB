#include<iostream>
using namespace std;

bool isPrime(int num ){
    for(int i = 2; i< num; i++){
        if(num%i == 0){
            return false;
        }
       
    }
     return true;
}
int main()
{
    int n;
    cout<<"eNTER N"<<endl;
    cin>>n;
  if(isPrime(n)){
    cout<<"Prime number"<<endl;
    return 0;
  }
  else{
    cout<<"Not Prime"<<endl;
  }
    
    return 0;
}