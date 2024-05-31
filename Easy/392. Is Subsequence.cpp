class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_pointer = 0, t_pointer = 0;
        while(s_pointer < s.size() && t_pointer < t.size()) {
            if(s[s_pointer] == t[t_pointer]) {
                s_pointer++;
            }
            t_pointer++;
        }
        return s_pointer == s.size();
    }
};