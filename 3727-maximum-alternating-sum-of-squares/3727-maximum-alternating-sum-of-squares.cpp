class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans =0;
        for(int i =0; i < nums.size();i++) {
            nums[i] = nums[i] * nums[i];
        }
        sort(nums.begin(),nums.end());
        int left = 0;
        int right = nums.size() - 1;
        while(left < right) {
            ans = ans + nums[right] - nums[left];
            left++;
            right--;
        }
        if(left == right) {
            ans += nums[left];
        }
        return ans;
    }
};