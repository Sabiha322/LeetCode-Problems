// LeetCode #28 - Implement strStr()
// Problem: Return the index of the first occurrence of needle in haystack.

#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
    int h = haystack.size();
    int n = needle.size();
    
    if (n == 0) return 0;

    for (int i = 0; i <= h - n; i++) {
        if (haystack.substr(i, n) == needle)
            return i;
    }
    
    return -1;
}

int main() {
    string haystack = "leetcode";
    string needle = "code";
    cout << "Index: " << strStr(haystack, needle) << endl;
    return 0;
}
