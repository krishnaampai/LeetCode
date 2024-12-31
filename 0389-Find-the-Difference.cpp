class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> umap;
        for (char c : s){
            umap[c]++;
        }
        for (char c : t){
            if (umap[c] == 0){
                return c;
            }
            umap[c]--;
        }
        return '\\0';
    }
};
