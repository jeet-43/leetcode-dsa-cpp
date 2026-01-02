// Problem: Rotate Array
// Approach: Reversal Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)
// Problem Link:https://leetcode.com/problems/rotate-array/description/

class Solution {
public:
    void reversePart(vector<int>& nums, int start, int end) {
        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  

        
        reversePart(nums, 0, n - 1);

        
        reversePart(nums, 0, k - 1);

        
        reversePart(nums, k, n - 1);
    }
};


