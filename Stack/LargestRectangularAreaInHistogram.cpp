#include<iostream>
#include<stack>
#include<vector>
using namespace std;



class Solution {
private:
    // Helper function to find the next smaller element index for each element
    vector<int> nextSmallerElement(vector<int> heights, int n) {
        stack<int> s;
        s.push(-1);

        vector<int> ans(n);
        for (int i = n - 1; i >= 0; i--) {
            int curr = heights[i];

            // Pop elements from the stack until a smaller element is found
            while (s.top() != -1 && heights[s.top()] >= curr) {
                s.pop();
            }

            // Store the index of the next smaller element
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    // Helper function to find the previous smaller element index for each element
    vector<int> prevSmallerElement(vector<int> heights, int n) {
        stack<int> s;
        s.push(-1);

        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            int curr = heights[i];

            // Pop elements from the stack until a smaller element is found
            while (s.top() != -1 && heights[s.top()] >= curr) {
                s.pop();
            }

            // Store the index of the previous smaller element
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

public:
    // Main function to find the largest rectangle area in a histogram
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        // Find the next smaller element for each element
        vector<int> next(n);
        next = nextSmallerElement(heights, n);

        // Find the previous smaller element for each element
        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);

        int area = INT_MIN;
        for (int i = 0; i < n; i++) {
            int length = heights[i];

            // If the next smaller element is not found, set it to the end of the array
            if (next[i] == -1) {
                next[i] = n;
            }

            // Calculate the breadth of the rectangle
            int breadth = next[i] - prev[i] - 1;

            // Calculate the area of the rectangle formed by the current element
            int newArea = length * breadth;

            // Update the maximum area if the new area is greater
            area = max(area, newArea);
        }
        return area;
    }
};
