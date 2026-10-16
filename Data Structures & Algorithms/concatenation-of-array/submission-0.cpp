class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int initial = nums.size();
        for(int i = 0 ;i<initial;i++) nums.push_back(nums[i]);

        return nums;
    }
};