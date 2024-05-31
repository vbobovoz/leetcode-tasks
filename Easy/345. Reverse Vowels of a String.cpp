class Solution {
public:
    string reverseVowels(string s) {
        vector<int> index;
        vector<char> vowel;
        int vowels = 0;
        for(int i = 0; i < s.size(); ++i) {
            if(tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u') {
                vowels++;
                index.push_back(i);
                vowel.push_back(s[i]);
            }
        }
        reverse(index.begin(), index.end());
        for(int i = 0; i < vowels; ++i) {
            s[index[i]] = vowel[i];
        }
        return s;
    }
};