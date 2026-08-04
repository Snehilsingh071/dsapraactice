class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n = nums.size();
       vector <int> ans;

       int start = nums[0];
       int end = nums[n-1];
       
       unordered_map <int , int> map;
       for(int i = 0;i < n; i++) {
        map[nums[i]];
       }
       for(int i = start ; i <= end ; i++) {
        if(map.find(i) == map.end()) {
            ans.push_back(i);
        }
       }
       return ans;
    }
};