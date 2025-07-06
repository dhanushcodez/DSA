#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(vector<int>& arr) {
        int i = 0; int j = arr.size()-1;
        while(i<j){
            if(arr[i]!=arr[j]) return false;
            i++; j--;
        }
        return true;
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 2, 1}; // You can change the input to test
    Solution sol;
    bool result = sol.isPalindrome(arr);
    if(result)
        cout << "The array is a palindrome." << endl;
    else
        cout << "The array is not a palindrome." << endl;
    return 0;
}