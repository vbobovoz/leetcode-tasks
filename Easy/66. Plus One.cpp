class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size() - 1] += 1;
        for(int i = digits.size() - 1; i >= 0; --i) {
            if(digits[i] == 10) {
                digits[i] = 0;
                if(i != 0) {
                    digits[i - 1]++;
                }
                else {
                    digits.push_back(0);
                    digits[i] = 1;
                }
            }
        }
        return digits;
    }
};