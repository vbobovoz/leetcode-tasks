class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> result;
        int zeros = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] != 0) {
                result.push_back(nums[i]);
            } else {
                zeros++;
            }
        }
        for(int i = 0; i < zeros; ++i) {
            result.push_back(0);
        }
        copy(result.begin(), result.end(), nums.begin());
    }
};