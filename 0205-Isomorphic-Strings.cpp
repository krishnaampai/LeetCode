class Solution {
public:
    bool isIsomorphic(string s, string t) {
       int size = s.length();
       unordered_map<char, int>smap;
        for (int i =0;i<size; i++){
            if (smap[s[i]]>0){
                continue;
            }
            else {
                smap[s[i]] = i+1;
            }
        }
         unordered_map<char, int>tmap;
        for (int i =0;i<size; i++){
            if (tmap[t[i]]>0){
                continue;
            }
            else {
                tmap[t[i]]= i+1;
            }
        }
       
        for (int i =0;i<size; i++){
           if (smap[s[i]]!=tmap[t[i]]){
            return false;
           }
        }
        return true;
    }
};