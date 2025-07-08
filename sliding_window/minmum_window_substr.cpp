#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int mlen = INT_MAX, start = 0;
        unordered_map<char, int> m;
        for (char c : t) m[c]++;
        int cnt = t.size();
        int i = 0, j = 0;
        while (j < n) {
            if (m[s[j]] > 0) cnt--;
            m[s[j]]--;
            while (cnt == 0) {
                if (j - i + 1 < mlen) {
                    mlen = j - i + 1;
                    start = i;
                }
                m[s[i]]++;
                if (m[s[i]] > 0) cnt++;
                i++;
            }
            j++;
        }
        return mlen == INT_MAX ? "" : s.substr(start, mlen);
    }
};

int main() {
    string s = "ADOBECODEBANC";
    string t = "ABC";
    Solution sol;
    string result = sol.minWindow(s, t);
    cout << "Minimum window substring is: " << result << endl;
    return 0;
}