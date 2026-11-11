class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int res = nums[n-1] - nums[0];
        for(int i = 0; i < n-1;i++) {
            int maximum = max(nums[i] + k,nums[n - 1]-k);
            int minimum = min(nums[0] +k,nums[i+1] -k);
            res = min(res,maximum - minimum);
        }
        return res;
    }
};