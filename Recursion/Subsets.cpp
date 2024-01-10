#include<iostream>
#include <vector>
using namespace std;


class Solution {
private:
    // Recursive function to generate subsets
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans) {
        // Base case: if the index exceeds the size of nums, add the current output to ans
        if (index >= nums.size()) {
            ans.push_back(output);
            return;
        }

        // Exclude the current element by not adding it to the output subset
        solve(nums, output, index + 1, ans);

        // Include the current element in the output subset
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index + 1, ans);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;  // Vector to store all subsets
        vector<int> output;       // Temporary storage for subsets
        int index = 0;            // Starting index for subset generation

        // Start generating subsets
        solve(nums, output, index, ans);

        return ans;  // Return the generated subsets
    }
};
