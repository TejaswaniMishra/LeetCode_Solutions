// LeetCode 154 - Find Minimum in Rotated Sorted Array II
// Approach: Binary Search
// Time Complexity: Average O(log n), Worst O(n)
// Space Complexity: O(1)
// Key Idea: Compare mid with high to decide which half may contain the minimum. In duplicate cases, shrink the search space by reducing high.

// Alternative Approach:
// 1. Linear Scan - O(n)

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            }
            else if (nums[mid] < nums[high]) {
                high = mid;
            }
            else {
                high--;
            }
        }
        return nums[low];
    }
};
