class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> v;
        for(int x:nums) ++m[x];
        while(k--){
            auto x = m.begin();
            for(auto it = m.begin();it!=m.end();++it){
                if(x->second < it->second) x = it;
            }
            v.push_back(x->first);
            x->second = -1;
        }
        return v;
    }
};
