class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
      int n = nums.size();
      int ans = INT_MAX;
      for(int i =0; i < n;i++) {
        int curr_sum = 0;
        for(int j = i; j < n;j++) {
            curr_sum += nums[j];
            int length = j -i+1;
            if(length >= l && length <= r && curr_sum > 0) {
            ans = min(ans,curr_sum);
            }
        }
      }  
      return ans == INT_MAX ? -1 : ans;
    }
};