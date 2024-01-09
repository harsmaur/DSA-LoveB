#include <bits/stdc++.h>

// Recursive function to generate subsequences
void solve(string str, string output, int index, vector<string> &ans) {
    // Base case: if index exceeds the length of str
    if (index >= str.length()) {
        // Add the generated output to the answer vector if it's not empty
        if (output.length() > 0) {
            ans.push_back(output);
        }
        return;
    }

    // Exclude case: skip the current character and move to the next index
    solve(str, output, index + 1, ans);

    // Include case: append the current character to the output and move to the next index
    char element = str[index];
    output.push_back(element);
    solve(str, output, index + 1, ans);
}

// Function to generate subsequences of a string
vector<string> subsequences(string str) {
    vector<string> ans;  // Vector to store subsequences
    string output = "";  // Temporary string to build subsequences
    int index = 0;       // Starting index for generating subsequences

    // Start generating subsequences
    solve(str, output, index, ans);
    
    return ans;  // Return the generated subsequences
    // Write your code here
}
