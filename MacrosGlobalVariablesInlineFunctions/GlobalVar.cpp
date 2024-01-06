#include<iostream>
using namespace std;

//Creating a global variable
//bad practice  of using global variable
// use reference varible instead
int score = 15;


void getscore(){
    cout<<"The value of score in func get score is "<<score<<endl;
}


int main()
{

    cout<<"Value of score in main "<<score<<endl;
    getscore();
    return 0;
}