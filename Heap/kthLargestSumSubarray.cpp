#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int getKthLargest(vector<int> &arr, int k) {
    // Optimized Approach using min heap

    // Create a min heap to store the k largest sums
    priority_queue<int, vector<int>, greater<int>> pq;

    int n = arr.size();

    // Iterate over all starting points of subarrays
    for (int i = 0; i < n; i++) {
        int sum = 0;

        // Iterate over all ending points of subarrays starting from i
        for (int j = i; j < n; j++) {
            sum += arr[j];  // Calculate the sum of subarray from i to j

            // If the heap has less than k elements, push the current sum
            if (pq.size() < k) {
                pq.push(sum);
            } else {
                // If the current sum is larger than the smallest sum in the heap
                if (sum > pq.top()) {
                    pq.pop();  // Remove the smallest sum
                    pq.push(sum);  // Push the current sum
                }
            }
        }
    }

    // The top of the min heap is the k-th largest sum
    return pq.top();
}
