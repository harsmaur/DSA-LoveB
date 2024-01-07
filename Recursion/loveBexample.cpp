#include<iostream>
using namespace std;

void reachHome(int src, int dstn){

    cout<<"Source "<<src<<" "<<"Destination "<<dstn<<endl; 
    
    //base case
    if(src == dstn){
        cout<<"Reached Destination"<<endl;
        return;
    }

    //processing
    src++;

    //rr
    reachHome(src, dstn);
}
int main()
{
    int src = 0;
    int dstn = 10;
    reachHome(src, dstn);


    return 0;
}