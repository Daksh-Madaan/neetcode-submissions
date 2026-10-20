class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int x:nums) m[x]++;
        auto max = m.begin();
        for(auto it = m.begin();it!=m.end();it++){
            if(max->second<it->second) max = it;
        }
        return max->first;
    }
};