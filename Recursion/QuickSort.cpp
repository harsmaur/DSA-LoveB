#include <bits/stdc++.h> 

int Partition(vector<int> &arr, int s, int e){
    int pivot = arr[s];
    int i = s+1;
    int j = e;

    do{
       // i ko age badhate rho jab tak pivot se koi bda n mil jaye
        while(i<=j && arr[i] <= pivot){
            i++;
        }
       // j ko ghatate rho jab tak koi element pivot se chota na mil jaye
        while( i<=j && arr[j] > pivot){
            j--;
        }
        // agar dono ese mil gaye to swap a[i] and a[j]
        if(i<j){
            swap(arr[i], arr[j]);
        }

    }while(i<=j);

    //agar j cross kr dia i ko to pivot se arr[j] ko swap 
    swap(arr[j], arr[s]);
    return j;
}
void quickSort(vector<int> &arr, int s, int e){
    int partIndex;
    if(s>=e){
        return;
    }

    partIndex = Partition(arr, s, e);
    quickSort(arr, s, partIndex-1);
    quickSort(arr, partIndex+1, e);
}

vector<int> quickSort(vector<int> arr)
{
    quickSort(arr, 0, arr.size()-1);
    return arr;
    // Write your code here.
}
