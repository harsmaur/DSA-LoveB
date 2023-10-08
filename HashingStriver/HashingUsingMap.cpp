#include<iostream>
#include<map>
using namespace std;

//By using map we overcome the array decleration constraint
int main()
{
    
    int n;
    cout<<"Enter the size"<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
       mpp[arr[i]]++;
    }

//iteratig through the map
    for(auto it : mpp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }

cout<<"Enter queries"<<endl;
    int q;
    cin >> q;
    cout<<"Enter number who frequency is required"<<endl;
    while (q--) {
        int number;
        cin >> number;
        // fetching:
        cout << mpp[number] << endl;
    }
    return 0;
}