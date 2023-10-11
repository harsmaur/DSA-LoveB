#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s= 0;  // to reverse after m position start s = m+1 where m is the starting posiion for the reversing the array
    int e = v.size() -1;

    while(s<=e){
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}
void Print(vector<int> v){
    for(int i=0; i< v.size(); i++){
        cout<<v[i]<<endl;
    }
}

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(4);
vector<int> ans = reverse(v);
Print(ans);
    return 0;
}