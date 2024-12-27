class Solution {
public:
    string compressedString(string word) {
        string cmp = "";
        int count = 1;
        for (int i =0;i < word.size();i++){
            while (word[i]==word[i+1] && count <9){
                count++;
                i++;
            }
            cmp+= std::to_string(count);
            cmp+=word[i];
            count =1;
            if (count >=9){
                count = 1;
                while (word[i]==word[i+1]){
                count++;
                i++;
            }
            cmp+= std::to_string(count);
            cmp+=word[i];
            count =1;
            }
        }
        return cmp;
    }
};