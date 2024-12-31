class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int diff=0;
        int current_diff;
        for (int i =0;i < s.size();i++){
            current_diff = i - t.find(s[i]);
            diff +=abs(current_diff);
        }
        return diff;
    }
};