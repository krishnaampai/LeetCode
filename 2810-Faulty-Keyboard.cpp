class Solution { 
public:
    string finalString(string s) {
        string result;
        for (int i =0;i< s.length();i++){
            if (s[i] == 'i'){
               reverse(result.begin(), result.end() );
             
            }
            else {
               
                result.push_back(s[i]);
            }
            
        }
        return result;
    }
};
