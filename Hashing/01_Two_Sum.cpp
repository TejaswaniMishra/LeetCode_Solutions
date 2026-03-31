// LeetCode 01 - Two Sum
// Approach: unordered map
// Time Complexity: O(n)
// Space Complexity: O(n)

// Alternative Approach:
// 1. arrays - O(n^2)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            int compliment = target - nums[i];
            if(mp.find(compliment) != mp.end())
                return{i,mp[compliment]};
            mp[nums[i]]=i;
        }
        return {};
    }
};
