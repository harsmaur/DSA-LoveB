#include<iostream>
using namespace std;

//exmaple of head recursion
void count(int n){

    //base case
    if(n==0){
        return;
    }

      //recursive relation
     count(n-1);

       // processing
     cout<<n<<endl;
}


//exmaple of tail recursion
void count(int n){

    //base case
    if(n==0){
        return;
    }
     // processing
     cout<<n<<endl;

      //recursive relation
     count(n-1);

      
}


int main()
{
    int n;
    cin>> n;
    count(n);
    return 0;
}

// https://www.codingninjas.com/studio/guided-paths/data-structures-algorithms/content/118522/offering/1380913