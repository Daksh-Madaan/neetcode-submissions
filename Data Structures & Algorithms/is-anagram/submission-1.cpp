class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
        for(char a: s) ++m[a];
        for(char b: t) --m[b];

        for(char a: s.length()>t.length()?s:t){
            if(m[a] != 0) return false;
        }

        return true;
    }
};
