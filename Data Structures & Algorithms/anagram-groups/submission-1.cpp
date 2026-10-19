class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> a;
        vector<string> copy = strs;
        for(int i = 0;i<strs.size();i++){
            sort(strs[i].begin(),strs[i].end());
        }
        unordered_map<string,vector<int>> m;
        for(int i = 0;i<strs.size();i++){
            m[strs[i]].push_back(i);
        }
        for(auto it = m.begin();it!=m.end();it++){
            vector<string> b;
            for(int i:it->second) b.push_back(copy[i]);
            a.push_back(b);
        }
        return a;
    }
};
