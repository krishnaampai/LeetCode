class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        int present_score;
        for (int i =0;i <s.length()-1;i++){
           present_score = abs(int(s[i]) - int(s[i+1]));
           score+=present_score;
        }
        return score;
    }

};