#include <iostream>
#include <string>
using namespace std;

void reverseString(string& s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main() {
    string str = "hello";
    reverseString(str);
    cout << str;
    return 0;
}
