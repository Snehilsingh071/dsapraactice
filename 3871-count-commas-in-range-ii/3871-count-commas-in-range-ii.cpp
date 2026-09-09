class Solution {
public:
    long long countCommas(long long n) {
        long long total = 0;

        long long x = n - 999;
        if (x > 0) {
            total += x;
        }

        x = n - 999999;
        if (x > 0) {
            total += x;
        }

        x = n - 999999999;
        if (x > 0) {
            total += x;
        }

        x = n - 999999999999LL;
        if (x > 0) {
            total += x;
        }

        x = n - 999999999999999LL;
        if (x > 0) {
            total += x;
        }

        return total;
    }
};
