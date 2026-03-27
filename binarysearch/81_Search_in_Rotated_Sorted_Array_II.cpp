// LeetCode 81 - Search in Rotated Sorted Array II
// Approach: Binary Search
// Time Complexity: Average O(log n), Worst O(n)
// Space Complexity: O(1)
// Key Idea: Use binary search to identify the sorted half. In duplicate cases, shrink the search space from both ends.

// Alternative Approach:
// 1. Linear Search - O(n)

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return true;
            }
            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low++;
                high--;
            }
            else if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target < nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            else {
                if (nums[mid] < target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};
