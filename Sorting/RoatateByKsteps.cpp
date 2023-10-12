#include<iostream>
#include<vector>
using namespace std;

vector<int> rotateByKsteps( int arr[], int k){
   vector<int> temp(6);

   for(int i=0; i<6; i++){
     temp[(i+k)%6] = arr[i];  // 6 is the size of the array
   }
   
   return temp;
}
int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int k = 3;

  vector<int> result =   rotateByKsteps(arr, k);
  for(auto it: result){
    cout<<it<<endl;
  }
    
    return 0;
}