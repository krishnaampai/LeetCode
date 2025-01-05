class Solution {
public:
    int lengthOfLastWord(string s) {
        string lastword;
        string word;
        stringstream ss(s);
        while (ss >> word){
            lastword = word;
        }
        return lastword.length();
    }
};