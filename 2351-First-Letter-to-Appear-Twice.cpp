class Solution {
public:
    char repeatedCharacter(string s) {
        int a[26] = {0};
        for (char c: s){
            a[c-'a']++;
            if (a[c-'a']==2){
                return c;
            }
        }
       
        return '\0';
    }
};
