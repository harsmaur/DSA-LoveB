#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout<<arr<<endl;

    //prints entire string
    cout<<ch<<endl;
 /// implenentation of cout is deiffrent for both int and char

    char *c = &ch[0];
    //prints the entire string
    cout<<c<<endl;

    char temp = 'z';
    char *p = &temp;
    cout<<p<<endl; // prints untill the null char is encountered
    
    return 0;
}