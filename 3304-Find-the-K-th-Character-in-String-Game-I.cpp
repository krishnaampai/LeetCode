class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";
        
        while (s.length()<=k){
            string generated="";
            for (char c : s){
                if (c== 'z'){generated+= 'a';}
                generated += static_cast<char>(static_cast<int>(c) +1);
            }
            s+=generated;
        }
        return s[k-1];
    }
};
