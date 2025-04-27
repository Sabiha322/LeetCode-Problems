#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false;
    int original = x, reversed = 0;
    while (x != 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    return original == reversed;
}

int main() {
    int num = 121;
    cout << (isPalindrome(num) ? "Palindrome" : "Not Palindrome") << endl;
    return 0;
}
