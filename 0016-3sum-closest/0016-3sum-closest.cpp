class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       sort(nums.begin(),nums.end());
       int n = nums.size();
       int result = 0;
       int maxdiff = INT_MAX;
       for(int i = 0; i < n-2;i++) {
        int start = i + 1;
        int end = n - 1;
            while(start < end) {
                int sum = nums[i] + nums[start] + nums[end];
                int diff = abs(sum - target);
                if(diff < maxdiff) {
                    maxdiff = diff;
                    result = sum;
                }
                if(sum < target) {
                    start++;
                }
                else if ( sum > target) {
                    end--;
                }
                else {
                    return sum;
                }
            }
       }
       return result;
    }
};