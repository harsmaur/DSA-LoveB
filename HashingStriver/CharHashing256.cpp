#include<iostream>
using namespace std;

int main()
{
        string s;
    cout << "Enter the string" << endl;
    cin >> s;
   
    
 
    // precompute:
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
        //no need to subtract to get the corresoponding hash array address
        //as it already contains 0 - 255 (all characters)
        
    }

    cout << "Enter queries" << endl;
    int q;
    cin >> q;
    cout << "Enter number who frequency is required" << endl;
    while (q--)
    {
        char c;
        cin >> c;
        // fetching:
        cout << hash[c] << endl;  
    }
    return 0;
}