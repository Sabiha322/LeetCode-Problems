// Problem: Plus One
// LeetCode: https://leetcode.com/problems/plus-one/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Start adding from the last digit
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i]++; // Just add 1 if it's < 9 and return
                return digits;
            }
            digits[i] = 0; // Set to 0 and carry will go to next digit
        }

        // If all digits were 9 (like 999 → 1000)
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
