class Solution {
public:
    int countDifferentSubsequenceGCDs(vector<int>& nums) {
        int maxi = 0;

        // Find maximum number
        for (int i = 0; i < nums.size(); i++) {
            maxi = max(maxi, nums[i]);
        }

        // Mark which numbers are present
        vector<bool> present(maxi + 1, false);

        for (int i = 0; i < nums.size(); i++) {
            present[nums[i]] = true;
        }

        int ans = 0;

        
        for (int i = 1; i <= maxi; i++) {
            int g = 0;
            for (int j = i; j <= maxi; j += i) {
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