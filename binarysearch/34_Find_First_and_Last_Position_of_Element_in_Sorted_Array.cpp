// LeetCode 34 - Search in Rotated Sorted Array
// Approach: Binary Search
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1; 
        int ans = -1 ;
        while(l<=r){
            int mid = (r+l)/2;
            if(nums[mid] == target){
                ans =  mid;
                r = mid - 1;
            }
            else if(nums[mid] < target){
                l = mid+1;
            }
            else if (nums[mid]>target)
                r = mid-1;
        }
        l = 0;
        r = nums.size()-1; 
        int ans2 = -1 ;
        while(l<=r){
            int mid = (r+l)/2;
            if(nums[mid] == target){
                ans2 =  mid;
                l = mid + 1;
            }
            else if(nums[mid] < target){
                l = mid+1;
            }
            else if (nums[mid]>target)
                r = mid-1;
        }
        return {ans,ans2};   
    }
};
