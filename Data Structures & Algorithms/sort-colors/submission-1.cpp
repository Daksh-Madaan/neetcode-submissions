class Solution {
public:
    void sortColors(vector<int>& nums) {
        int arr[3] = {0,0,0};
        for(int x:nums) ++arr[x];
        int k = 0;
        for(int i = 0;i<3;i++){
            for(int j = 0;j<arr[i];j++){
                nums[k++] = i;
            }
        }
    }
};