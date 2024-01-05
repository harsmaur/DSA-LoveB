#include<iostream>
using namespace std;

//same m/m different names
// why?
//when we update value in a function by function call it gets updated by the call by value method but the value of that var is not changed out of the funciton scope

void update(int &j){ 
    // by this way the copy is not created at function but the actual value is changed
    j++;
    //here j is a reference var pointing to same location of n
    
}

//bad practice since all the var inside a function is local scoped

// int& func(int n){
//     int num  = a;
//     int &ans = num;
//     return ans;
// }

// int* func(int n){
//     int num  = a;
//     int *ans = num;
//     return ans;
// }


int main()
{
    int i = 5;

    ///creating reference variable it points to ht same location
    int &j = i;

    cout<<++i<<endl;
    cout<<++j<<endl;

    cout<<i <<" "<< j <<endl;



    //pass by reference
    int n = 6;
    cout<<"Before n "<<n<<endl;
    update(n);
    cout<<"After n "<<n<<endl;

    return 0;
}