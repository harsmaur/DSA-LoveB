#include <iostream>
#include <algorithm>
using namespace std;

// Find length of char array
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

// Reverse a String
void ReverseString(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(name[s], name[e]);
        s++; e--;
    }
}

char toLowerCase(char ch){
    if(ch >='a' && ch <='z'){ //check if already in lowercase
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';  // converting to lowercase
        return temp;
    }
}
//check Palindrome
bool CheckPalindrome(char a[], int len){
    int s = 0;
    int e = len-1;
    while(s<=e){
        if(toLowerCase(a[s]) != toLowerCase(a[e])){
            return false;
        }
        else{
            s++; e--;
        }
        
    }
    return true;
}

int main()
{
    char name[20];
    cout << "Enter your name" << endl;
    cin >> name;

    cout << "Your name is " << endl;
    cout << name << endl;

    int n = getLength(name);
    cout << n << endl;

    ReverseString(name, n);
    cout << name << endl;

    cout<<"Checking Palindrome"<<endl;
    cout<<"The char is palindrome or not "<<CheckPalindrome(name, n)<<endl;

    return 0;
}