class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string min = strs[0];
        string c = "";
        for(int i = 0;i<strs.size();i++){
            if(strs[i].length()<min.length()) min = strs[i];
        }
        if(min == "") return min;

        for(int i = 0;i<min.length();i++){
            int f = 1;
            for(int j = 0;j<strs.size();j++){
                if(strs[j][i] != min[i]){
                    f = 0; 
                    break;
                }
            }
            if(f) c.push_back(min[i]);
            else break;
        }

        return c;
    }
};