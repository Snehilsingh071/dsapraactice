// //class Solution {
// //blic:
//     void duplicateZeros(vector<int>& arr) {
//         int n = arr.size();

//         vector<int> ans;
//         for(int i= 0; i < n ;i++) {
//             if(arr[i] == 0) {
//             ans.push_back(0);
//             if(ans.size() < n) {
//             ans.push_back(0);
//               }
//             }
//             else {
//                 ans.push_back(arr[i]);
//             }
//         }
//         for(int i = 0; i < n - 1;i++) {
//             arr[i] = ans[i];
//         }
//     }
// };
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();

        vector<int> ans;

        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                ans.push_back(0);

                if (ans.size() < n) {
                    ans.push_back(0);
                }
            } 
            else {
                ans.push_back(arr[i]);
            }
        }

        for (int i = 0; i < n; i++) {
            arr[i] = ans[i];
        }
    }
};