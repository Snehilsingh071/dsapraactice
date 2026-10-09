class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        for(int h = n;h >= 1;h--) {
        int ans = 0;       
       for(int i = 0; i < n;i++) {
        if(citations[i] >= h)
           ans++;
       }
       if(ans >= h)
       return h;
       } 
       return 0;
    }
};