class Solution {
public:

    string encode(vector<string>& strs) {
        string t;
        for(string s:strs){
            t += s+"*"+to_string(s.length());
        }
        return t;
    }

    vector<string> decode(string s) {
        int count = 0;
        string sl;
        vector<string> t;
        for(int i = 0;i<s.length();i++){
            if(isdigit(s[i+1]) && s[i] == '*'){
                string num;
                int j = i+1;
                while(j<s.length() && isdigit(s[j])){
                    num += s[j];
                    if(stoi(num) == count) break;
                    j++;
                }
                int n = stoi(num);
                if(n == count){
                    t.push_back(sl);
                    sl.clear();
                    count =0 ;
                    i = j;
                    continue;
                }
            }
            else{
                sl.push_back(s[i]);
                count++;
            }
        }
        return t;
    }
};
