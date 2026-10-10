class Solution {
public:
    int findMin(vector<int>& nums) {
        set<int> s;
        int n = nums.size();
        for(int i = 0; i < n;i++) {
            s.insert(nums[i]);
        } 
        sort(nums.begin(),nums.end());
        return nums[0];        
    }
};