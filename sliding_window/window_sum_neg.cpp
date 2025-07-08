#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
int longestConsecutive(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());
    int longest = 0;
    for (int num : numSet) {
        if (numSet.find(num - 1) == numSet.end()) { // start of a sequence
            int currentNum = num;
            int currentStreak = 1;
            while (numSet.find(currentNum + 1) != numSet.end()) {
                currentNum += 1;
                currentStreak += 1;
            }
            longest = max(longest, currentStreak);
        }
    }
    return longest;
}
};

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2}; // You can change the input to test
    Solution sol;
    int result = sol.longestConsecutive(nums);
    cout << "Length of longest consecutive sequence is: " << result << endl;
    return 0;
}