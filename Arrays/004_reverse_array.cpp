// Problem: Reverse Array
// Approach: Using Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)
// Problem Link:https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/reverse-an-array

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int left = 0,right =arr.size()-1;
        while (left<right){
            swap (arr[left],arr[right]);
            left++;
            right--;
        }
    }
};
