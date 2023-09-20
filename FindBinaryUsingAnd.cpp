#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    int i = 0;
    int ans = 0;
    while (n != 0)
    {
        int bit = n & 1;                // store the anded last bit in digit
        ans = (bit * pow(10, i)) + ans; // store th enumb r in ans
        n = n>>1;                       // right shift n by 1
        i++;
    }
    cout<<ans;
    
}