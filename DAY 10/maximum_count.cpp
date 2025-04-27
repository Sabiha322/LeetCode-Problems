#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int positive = 0, negative = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0) {
                positive++;
            } else if (nums[i] < 0) {
                negative++;
            }
            // If nums[i] == 0, do nothing
        }
        return max(positive, negative);
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-2, -1, 0, 1, 2, 3}; 
    int result = sol.maximumCount(nums);
    cout << "Maximum count of positives or negatives: " << result << endl;
    return 0;
}
