class Solution {
public:
    int minPartitions(string n) {
        int result = 0;
        int num;
        for (char c : n){
            num = c - '0';
            if (num> result){
                result = num;
            }
        }
        return result;
    }
};