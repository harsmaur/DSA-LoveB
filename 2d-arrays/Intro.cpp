#include <iostream>
using namespace std;


int SerachElement(int arr[][3], int target, int row, int col){
      for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if(arr[row][col] == target){
                return 1;
            }
        }
       
    }
    return 0;
}


int main()
{
    // creating 2d array 
    int arr[3][3];

    // input methood 1 
    int brr[3][3] = {1,2,3,4,5,6,7,8,9};

    // input method 2 
    int crr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    // input row wise
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    // for column wise input
    // for(int col= 0; col<3; col++){
    //     for(int row= 0; row<3; row++){
    //         cin>>arr[row][col];

    //     }
    // }

    // output for the 2d array
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }



// seraching in 2d array  
// passing column size is important in function
    cout<<SerachElement(arr, 1, 3, 3);
    return 0;

    
} 