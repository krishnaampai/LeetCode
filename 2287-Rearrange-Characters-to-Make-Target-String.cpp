class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int> targetfreq(26, 0);
        for (char ch : target) {
            targetfreq[ch - 'a']++;
        }
        vector<int> sfreq(26, 0);
        for (char ch : s) {
            sfreq[ch - 'a']++;
        }
        int result = INT_MAX;
        for (char ch : target) {
            if ( targetfreq[ch - 'a']>0) {
                 result = min(result, sfreq[ch - 'a'] / targetfreq[ch - 'a']);
            }
        }
        return result;
    }
};