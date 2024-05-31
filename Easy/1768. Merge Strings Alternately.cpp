class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        if(word1.size() == word2.size()) {
            for(int i = 0; i < word1.size(); ++i) {
                result += word1[i];
                result += word2[i];
            }
            return result;     
        }
        if(word1.size() > word2.size()) {
            for(int i = 0; i < word2.size(); ++i) {
                result += word1[i];
                result += word2[i];
            }
            result += word1.substr(word2.size());
            return result;
        } else {
            for(int i = 0; i < word1.size(); ++i) {
                result += word1[i];
                result += word2[i];
            }
            result += word2.substr(word1.size());
            return result;
        }
    }
};