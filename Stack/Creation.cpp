#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;


    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    //pop
    s.pop();
  cout<<   s.top() <<endl;
  cout<< s.empty() <<endl;


    return 0;
}