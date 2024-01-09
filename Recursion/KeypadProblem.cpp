#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
private:
    // Recursive function to generate letter combinations
    void solve(string digits, string output, int index, vector<string>& ans, string mapping[]) {
        // Base case: if the index exceeds the length of digits, add the generated output to ans
        if (index >= digits.length()) {
            ans.push_back(output);
            return;
        }

        // Extract the digit from the string (e.g., '2' from "23")
        int number = digits[index] - '0';  // Convert character to integer ('2' to 2)
        string value = mapping[number];    // Retrieve the corresponding string from mapping ('abc' for 2)

        // For each character in the mapped string, i.e., 'a', 'b', and 'c'
        for (int i = 0; i < value.length(); i++) {
            // Add the current character to the output
            output.push_back(value[i]);
            
            // Recursively generate combinations for the next index
            solve(digits, output, index + 1, ans, mapping);

            // Backtrack: remove the last character to explore other combinations
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;  // Vector to store generated combinations

        // If the input digits are empty, return an empty vector
        if (digits.length() == 0) {
            return ans;
        }

        string output = "";  // Temporary string to build combinations
        int index = 0;       // Starting index for generating combinations

        // Define the mapping of digits to corresponding letters
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        // Start generating combinations
        solve(digits, output, index, ans, mapping);

        return ans;  // Return the generated combinations
    }
};
