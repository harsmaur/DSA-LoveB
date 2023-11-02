#include <iostream>
using namespace std;

//Search 
int SerachElement(int arr[][3], int target, int row, int col){
     for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == target) {
                return 1;
            }
        }
    }
    return 0;
}


//Find row wise sum 
void printSum(int arr[][3], int row, int col){

   for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
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
    cout<<endl;
    printSum(arr, 3, 3);
    return 0;


} 