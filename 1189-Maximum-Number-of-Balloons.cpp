class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> umap;
        for (char c : text) {
            umap[c]++;
        }
        int ans = 0;
        string s = "balloon";
        while (umap['b'] > 0) {
            for (char c : s) {
                if (umap[c] <= 0) {
                    return ans;
                }
                umap[c]--;
            }
            ans++;
        }
        return ans;
    }
};
