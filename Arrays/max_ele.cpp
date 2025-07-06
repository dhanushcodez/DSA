#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMax(vector<int>& arr) {
        int ans = INT_MIN;
        for(int i =0;i<arr.size();i++){
            if(arr[i]>ans){
               ans= max(ans,arr[i]);
            }
        }
        return ans;
    }
};

int main() {
    vector<int> arr = {3, 7, 2, 9, 4};
    Solution sol;
    int result = sol.findMax(arr);
    cout << "Maximum element is: " << result << endl;
    return 0;