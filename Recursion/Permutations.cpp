#include<iostream>
#include<vector>
using namespace std;

class Solution {
private:
    // Function to generate permutations
    void solve(vector<int> nums, int index, vector<vector<int>> &ans) {
        // Base case: If the current index is greater than or equal to the size of nums
        if (index >= nums.size()) {
            // Add the current permutation to the answer vector
            ans.push_back(nums);
            return;
        }

        // Recursive permutation generation with backtracking
        for (int j = index; j < nums.size(); j++) {
            // Swapping elements to create permutations
            swap(nums[index], nums[j]);
            
            // Recursively generate permutations for the next index
            solve(nums, index + 1, ans);

            // Backtrack: Restore the array to its original state after recursion
            swap(nums[index], nums[j]);
        }
    }

public:
    // Function to generate all permutations of nums
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;

        // Start generating permutations
        solve(nums, index, ans);
        return ans;
    }
};
