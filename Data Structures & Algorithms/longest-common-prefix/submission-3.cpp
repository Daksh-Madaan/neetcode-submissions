class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min = 0;
        string c = "";
        for(int i = 0;i<strs.size();i++){
            if(strs[i].length()<min) min = i;
        }
        if(strs[min] == "") return strs[min];

        for(int i = 0;i<strs[min].length();i++){
            int f = 1;
            for(int j = 0;j<strs.size();j++){
                if(strs[j][i] != strs[min][i]){
                    f = 0; 
                    break;
                }
            }
            if(f) c.push_back(strs[min][i]);
            else break;
        }

        return c;
    }
};