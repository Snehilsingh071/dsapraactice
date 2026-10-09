
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = 1;

        while(low < n && high < n) {
            if(nums[low] % 2 == 0) {
               low += 2;
            }
             else if(nums[high] % 2 == 1) {
             high += 2;
            }
            else {
            swap(nums[low], nums[high]);
             low += 2;
             high += 2;
            }
        }

        return nums;
    }
};
