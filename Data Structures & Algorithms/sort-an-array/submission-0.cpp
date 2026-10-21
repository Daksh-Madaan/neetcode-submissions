class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        if (nums.size() <= 1) return nums;
        int mid = nums.size();
        vector<int> a(nums.begin(),nums.begin()+(mid/2));
        vector<int> b(nums.begin()+(mid/2),nums.end());

        vector<int> sA = sortArray(a);
        vector<int> sB = sortArray(b);

        vector<int> r;
        int i = 0,j = 0;
        while(i<sA.size() && j<sB.size()){
            if(sA[i]<sB[j]) r.push_back(sA[i++]);
            
            else r.push_back(sB[j++]);
        }
        while(i<sA.size()) r.push_back(sA[i++]);
        while(j<sB.size()) r.push_back(sB[j++]);
        return r;
    }
};