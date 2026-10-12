class Solution {
public:
    int countDifferentSubsequenceGCDs(vector<int>& nums) {
        int maxim = 0;      
        for (int i = 0; i < nums.size(); i++) {
            maxim = max(maxim, nums[i]);
        }        
        vector<bool> present(maxim + 1, false);

        for (int i = 0; i < nums.size(); i++) {
            present[nums[i]] = true;
        }

        int ans = 0;

        
        for (int i = 1; i <= maxim; i++) {
            int g = 0;
            for (int j = i; j <= maxim; j += i) {
                if (present[j]) {
                    g = gcd(g, j);
                }
            }
            if (g == i) {
                ans++;
            }
        }
        return ans;
    }
};