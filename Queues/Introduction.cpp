#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<"Queue front "<<q.front()<<endl;
    cout<<" Queue back "<<q.back()<<endl;

    cout<< "Size of queue is "<<endl;
    cout<<q.size()<<endl;

    q.pop();

    cout<< "Size of queue is "<<endl;
    cout<<q.size()<<endl;
     

    if(q.empty()){
        cout<<"Empty queue"<<endl;

    }else{
        cout<<"queue is not empty"<<endl;
    }

      cout<<"Queue front "<<q.front()<<endl;

    
    return 0;
}