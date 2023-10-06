#include <iostream>
using namespace std;

int main(){


    int n;
    cout<< "Enter number "<<endl;
    cin>>n;
    bool isPrime = true;
    int i = 2;
    while(i<n){
        if(n%i == 0){
            cout<<n<<" is not a prime number"<<endl;
            isPrime = false;
            break;
            
        }
        
        i++;
    }
    if(isPrime){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not a prime Number"<<endl;
    }
    return 0;
}