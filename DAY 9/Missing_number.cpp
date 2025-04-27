#include <vector>
#include <iostream>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int total_sum = (n * (n + 1)) / 2;
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    return total_sum - sum;
}

int main() {
    vector<int> nums = {3, 7, 1, 2, 8, 4, 5};
    cout << missingNumber(nums);
    return 0;
}
