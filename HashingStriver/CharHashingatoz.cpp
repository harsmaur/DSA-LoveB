#include <iostream>
using namespace std;

int main()
{

    string s;
    cout << "Enter the string" << endl;
    cin >> s;
   
    

    // precompute:
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
        //subtracting to get the corresponding index of hash array
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
        cout << hash[c-'a'] << endl;  //to get the index we need to subtract
    }

    return 0;
}