class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans =nums[0];
        int dpmax =nums[0], dpmin =nums[0];

        for(int i = 1; i < nums.size(); i++) {
            int num = nums[i];
            if(num < 0) swap(dpmax,dpmin);
            dpmax = max(num , dpmax * num);
            dpmin = min(num , dpmin * num);
            ans = max(ans,dpmax);
        }
        return ans;
    }
};