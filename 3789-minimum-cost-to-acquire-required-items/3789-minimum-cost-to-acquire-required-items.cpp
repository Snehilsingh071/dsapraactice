class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costboth, int need1, int need2) {
        long long min,max,ans;
        min = fmin(need1,need2);
        max = fmax(need1,need2);
        ans = (long long)need1 * cost1 + (long long)need2 * cost2;
        ans = fmin(ans,min * costboth +(need1 - min) * cost1 + (need2 - min) * cost2);
        ans = fmin(ans,max * costboth);
        return ans;
    }
};