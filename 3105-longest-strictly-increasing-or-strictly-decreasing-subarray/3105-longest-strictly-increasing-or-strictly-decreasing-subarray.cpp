class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int up=1,down=1;
        int ans  = 1;
        for(int i = 1;i < nums.size();i++) {
            if(nums[i] > nums[i-1]) {
                up++;
                down = 1;
            }
            else if(nums[i] < nums[i-1]) {
                down++;
                up =1;
            }
            else {
                up = down = 1;
            }
            ans = max(ans,max(down,up));
        }
        return ans;
    }
};