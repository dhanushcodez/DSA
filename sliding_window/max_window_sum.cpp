#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
 // ...existing code...
int longestSubarrayWithSumK(vector<int>& arr, int k) {
    int n = arr.size();
    int i = 0, sum = 0, ans = 0;
    for (int j = 0; j < n; j++) {
        sum += arr[j];
        while (sum > k && i <= j) {
            sum -= arr[i];
            i++;
        }
        if (sum == k) {
            ans = max(ans, j - i + 1);
        }
    }
    return ans;
}
};

int main() {
    vector<int> arr = {10, 5, 2, 7, 1, 9}; // You can change the input to test
    int K = 15;
    Solution sol;
    int result = sol.longestSubarrayWithSumK(arr, K);
    cout << "Length of longest subarray with sum " << K << " is: " << result << endl;
    return 0;