class Solution {
public:
    string convertDateToBinary(string date) {
       
        vector<string> tokens;
        stringstream s(date);
        string token;

       
        while (getline(s, token, '-')) {
            tokens.push_back(token);
        }

        string result;
        for (const auto& t : tokens) {
            int n = stoi(t); 
            vector<int> binary;

            
            while (n > 0) {
                binary.push_back(n % 2);
                n /= 2;
            }

            
            reverse(binary.begin(), binary.end());

            
            for (int bit : binary) {
                result += to_string(bit);
            }

            result += "-";
        }

        result.pop_back(); 
        return result;
    }
};



   