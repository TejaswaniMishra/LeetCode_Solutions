// LeetCode 153 - Find Minimum in Rotated Sorted Array
// Approach: Binary Search
// Time Complexity: O(log n)
// Space Complexity: O(1)

// Alternative Approaches:
// 1. Linear Scan - O(n)
// 2. Binary Search with tracking minimum in sorted half

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return nums[low];
    }
};
