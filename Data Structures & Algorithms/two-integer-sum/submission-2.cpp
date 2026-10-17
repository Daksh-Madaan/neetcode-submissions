class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int x = 0;x<nums.size();x++) m[nums[x]] = x+1;

        for(int x = 0;x<nums.size();x++){
            if(m[target - nums[x]] != 0 && m[target - nums[x]] != x+1)
                return {x,m[target-nums[x]]-1};
        }
        return {};
    }
};
