#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout<<"Enter the size"<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

cout<<"Enter queries"<<endl;
    int q;
    cin >> q;
    cout<<"Enter number who frequency is required"<<endl;
    while (q--) {
        int number;
        cin >> number;
        // fetching:
        cout << hash[number] << endl;
    }
    
    return 0;
}