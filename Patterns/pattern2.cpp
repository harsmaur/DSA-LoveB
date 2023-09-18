#include <iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {
        int j = 1; //for number of columns
        while(j<=n){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}