class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            int leftmax = nums[0];
            int rightmin = nums[i];

        for(int j = 0; j <= i;j++) {
            leftmax = max(leftmax,nums[j]);
        }
        for(int j = i; j < n; j++) {
            rightmin = min(rightmin, nums[j]);
        }

        int stable = leftmax - rightmin;

        if(stable <= k) {
          return i;
        }
        }
        return -1;      
    }
};