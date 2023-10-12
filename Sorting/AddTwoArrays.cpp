#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

//My approach brute force
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int A = 0;int B = 0;
    vector<int> res;

	for(int i =0; i <n; i++){
		A = A*10 + a[i];
	}

	
	for(int i =0; i <m; i++){
		B = B*10 + b[i];
	}

	int C = A+B;
	while(C!=0){
		int digit = C%10;
		res.push_back(digit);
		C= C/10;
	}
	reverse(res.begin(), res.end());
	return res;
	

}
int main()
{
   

return 0;
   
}