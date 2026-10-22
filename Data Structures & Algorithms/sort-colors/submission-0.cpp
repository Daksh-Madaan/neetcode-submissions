class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size()<=1) return;
        vector<int> a(nums.begin(),nums.begin()+(nums.size()/2));
        vector<int> b(nums.begin()+(nums.size()/2),nums.end());
        sortColors(a);
        sortColors(b);
        int i = 0,j = 0,k = 0;
        while(i<a.size() && j<b.size()){
            if(a[i]>b[j]) nums[k++] = b[j++];
            else nums[k++] = a[i++];
        }
        while(i<a.size()) nums[k++] = a[i++];
        while(j<b.size()) nums[k++] = b[j++];
    }
};