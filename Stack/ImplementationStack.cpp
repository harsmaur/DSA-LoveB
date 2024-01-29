#include<iostream>
using namespace std;

//without STL

class Stack{
public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int value){
       if(size - top > 1){
        top++;
        arr[top] = value;
       }
       else{
        cout<<"Overflow stack"<<endl;
       }
    }

    void pop(){
        if(top>= 0){
            top--;
        }
        else{
            cout<<"Underflow"<<endl;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    }

    int peek(){
       if(top >= 0 ){
        return arr[top];
       }else{
        cout<<"Empty Stack"<<endl;
        return -1;
       }
    }

};
int main()
{

    Stack s(5);

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<< s.peek() <<endl;

    s.pop();

    cout<< s.peek() <<endl;

    if(s.isEmpty()){
        cout<<"Stack Empty"<<endl;
    }else{
        cout<<"Not Empty"<<endl;
    }
    
    return 0;
}