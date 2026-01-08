// Problem: Stock Buy and Sell - Multiple Transactions (geeks for geeks)
         // Best Time to Buy and Sell Stock II (leetcode)
// Approach: By Accumulating Profit
// Time Complexity: O(n)
// Space Complexity: O(1)
// Problem Link:https:https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/stock-buy-and-sell2615
              //https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }
        }
        return profit;
    }
};
