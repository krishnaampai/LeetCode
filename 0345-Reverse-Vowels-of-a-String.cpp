class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int a = 0;
        int b = s.length() - 1;

        while (a < b) {
            while (a < b && vowels.find(s[a]) == vowels.end()) {
                a++;
            }
            while (a < b && vowels.find(s[b]) == vowels.end()) {
                b--;
            }

            if (a < b) {
                char temp = s[a];
                s[a] = s[b];
                s[b] = temp;
                a++;
                b--;
            }
        }
        return s;
    }
};

    
