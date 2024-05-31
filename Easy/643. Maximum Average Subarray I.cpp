class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double s = 0, size = nums.size();
        for(int i = 0; i < k; ++i) {
            s += nums[i];
        }
        double s_max = s;
        for(int i = k; i < size; i++) {
            s += nums[i] - nums[i - k];
            s_max = max(s, s_max);
        }
        return s_max / k;
    }
};