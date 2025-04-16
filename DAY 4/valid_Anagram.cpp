// Problem: Valid Anagram
// LeetCode: https://leetcode.com/problems/valid-anagram/

#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, int> freq;

        // Bouncer ticking Sally's letters
        for (char c : s) {
            freq[c]++;
        }

        // Tina arrives, unticking letters
        for (char c : t) {
            freq[c]--;
            if (freq[c] < 0) return false;
        }

        return true;
    }
};
