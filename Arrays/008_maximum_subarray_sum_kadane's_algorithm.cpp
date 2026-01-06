// Problem: Stock Buy and Sell - Maximum Subarray Sum
// Approach: Kadane's Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)
// Problem Link:https:// www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/kadanes-algorithm-1587115620
                      // https://leetcode.com/problems/maximum-subarray/description/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxEnding = nums[0];
        int maxSoFar = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            if (maxEnding + nums[i] > nums[i])
                maxEnding = maxEnding + nums[i];
            else
                maxEnding = nums[i];

            if (maxEnding > maxSoFar)
                maxSoFar = maxEnding;
        }

        return maxSoFar;
    }
};

