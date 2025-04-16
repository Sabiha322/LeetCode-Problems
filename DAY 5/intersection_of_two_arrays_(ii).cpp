// Problem: Intersection of Two Arrays II
// LeetCode: https://leetcode.com/problems/intersection-of-two-arrays-ii/

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        vector<int> result;

        // Count frequency of each element in nums1
        for (int num : nums1) {
            freq[num]++;
        }

        // Check which elements from nums2 are in freq map
        for (int num : nums2) {
            if (freq[num] > 0) {
                result.push_back(num);
                freq[num]--; // Decrease count so we only take common elements
            }
        }

        return result;
    }
};
