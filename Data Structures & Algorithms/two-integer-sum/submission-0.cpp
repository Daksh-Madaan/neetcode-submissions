class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> r;
        int s;
        for(int i = 0;i<nums.size();i++){
            s = target - nums[i];
            for(int j = i+1;j<nums.size();j++){
                if(s == nums[j]){
                    r.push_back(i);
                    r.push_back(j);
                    break;
                }
            }
            if(r.size()) break;
        }

        return r;
    }
};
