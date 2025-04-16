// LeetCode #53 - Maximum Subarray
// Problem: Find the contiguous subarray with the largest sum.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];      // Store the final max subarray sum
    int currentSum = nums[0];  // Track current subarray sum

    for (int i = 1; i < nums.size(); i++) {
        // Either extend the previous subarray or start new from current element
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum Subarray Sum: " << maxSubArray(nums) << endl;
    return 0;
}
