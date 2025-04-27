// Problem: Single Number (LeetCode 136)
// Difficulty: Easy
// Link: https://leetcode.com/problems/single-number/

#include <bits/stdc++.h>
using namespace std;

/////////////////////
// Brute Force Approach – O(n^2) time
/////////////////////
int singleNumberBruteForce(vector<int>& nums) {
    for(int i = 0; i < nums.size(); i++) {
        int count = 0;
        for(int j = 0; j < nums.size(); j++) {
            if(nums[i] == nums[j]) {
                count++;
            }
        }
        if(count == 1) {
            return nums[i];
        }
    }
    return -1; // should never hit this case
}

/////////////////////
// Optimized XOR Approach – O(n) time, O(1) space
/////////////////////
int singleNumberXOR(vector<int>& nums) {
    int result = 0;
    for(int num : nums) {
        result ^= num;  // XOR cancels out duplicates
    }
    return result;
}

/////////////////////
// Test code (can be removed if submitting to LeetCode)
/////////////////////
int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    cout << "Brute Force Result: " << singleNumberBruteForce(nums) << endl;
    cout << "Optimized XOR Result: " << singleNumberXOR(nums) << endl;

    return 0;
}
