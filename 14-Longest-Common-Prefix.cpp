class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int count = 0;
        int min = 1000;
        string str;
        for (int i =0;i < strs.size();i++){
            if (strs[i].length() < min){
                min = strs[i].length();
                str = strs[i];

            }
        }

        for (int i =0;i < min;i++){
            for (int j =0; j < strs.size();j++){
                if (strs[j][i]  != str[i]){
                    return str.substr(0,count);
                }
                
            }
            count++;
        }

        return str.substr(0,count);
    }
};