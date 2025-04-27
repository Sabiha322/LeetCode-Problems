#include <vector>
#include <iostream>
using namespace std;

int searchIndexElement(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;  // Element not found
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 3;
    int result = searchIndexElement(arr, target);
    if (result != -1) {
        cout << "Element found at index: " << result;
    } else {
        cout << "Element not found";
    }
    return 0;
}
