class Solution {
public: 
    int strStr(string haystack, string needle) {
        int j =(haystack.length() -  needle.length())+1;
        for (int i =0;i<j;i++){
           string s =  haystack.substr(i, needle.length());
            if(s.compare(needle) == 0){
                return i;
            }
        }
        return -1;
    }
};
