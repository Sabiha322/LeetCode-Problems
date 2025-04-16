// Problem: Best Time to Buy and Sell Stock
// LeetCode: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX; // Lowest price seen so far
        int maxProfit = 0;      // Maximum profit possible

        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price; // Update minPrice if current price is lower
            } else if (price - minPrice > maxProfit) {
                maxProfit = price - minPrice; // Update maxProfit if selling now is better
            }
        }

        return maxProfit;
    }
};
