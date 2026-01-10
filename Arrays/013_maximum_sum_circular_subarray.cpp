// Problem: maximum sum circular subarray
// Approach: Kadane's Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)
// Problem Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/max-circular-subarray-sum-1587115620
              // https://leetcode.com/problems/maximum-sum-circular-subarray/description/
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum = nums[0];

        int currMax = nums[0], maxSum = nums[0];
        int currMin = nums[0], minSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currMax = max(nums[i], currMax + nums[i]);
            maxSum = max(maxSum, currMax);

            currMin = min(nums[i], currMin + nums[i]);
            minSum = min(minSum, currMin);

            totalSum += nums[i];
        }
        if (maxSum < 0) return maxSum;

        return max(maxSum, totalSum - minSum);
    }
};
