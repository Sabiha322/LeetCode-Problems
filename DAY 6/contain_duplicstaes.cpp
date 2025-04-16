// Problem: Contains Duplicate (LeetCode 217)
// Difficulty: Easy
// Link: https://leetcode.com/problems/contains-duplicate/

#include <bits/stdc++.h>
using namespace std;

/////////////////////
// Brute Force Approach – O(n^2) time
/////////////////////
bool containsDuplicateBruteForce(vector<int>& nums) {
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}

/////////////////////
// Sorted Approach – O(n log n) time, O(1) space
/////////////////////
bool containsDuplicateSorted(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size() - 1; i++) {
        if(nums[i] == nums[i + 1]) {
            return true;
        }
    }
    return false;
}

/////////////////////
// HashSet Approach – O(n) time, O(n) space
/////////////////////
bool containsDuplicateHashSet(vector<int>& nums) {
    unordered_set<int> seen;
    for(int num : nums) {
        if(seen.count(num)) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}

/////////////////////
// Test code (can be removed if submitting to LeetCode)
/////////////////////
int main() {
    vector<int> nums = {1, 2, 3, 4, 1};

    cout << "Brute Force Result: " << containsDuplicateBruteForce(nums) << endl;
    cout << "Sorted Result: " << containsDuplicateSorted(nums) << endl;
    cout << "HashSet Result: " << containsDuplicateHashSet(nums) << endl;

    return 0;
}
