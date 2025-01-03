class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> schars,tchars;
        for (int i=0;i<s.length();i++){
            schars[s[i]]++;
            tchars[t[i]]++;
        }
        if (schars==tchars){
            return true;
        }
        return false;
    }
};
