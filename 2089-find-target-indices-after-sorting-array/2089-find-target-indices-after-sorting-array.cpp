class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int left = 0, equal = 0;
        for (int x : nums) {
            if (x < target) left++;
            else if (x == target) equal++;
        }
        vector<int> ans;
        for (int i = 0; i < equal; i++) {
            ans.push_back(left + i);
        }
        return ans;
    }
};