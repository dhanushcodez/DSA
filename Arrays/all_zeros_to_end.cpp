#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        int j =0;
        while(j<n){
           if(arr[j]!=0){
            arr[i]=arr[j];
            i++;
            j++;
           }
           else{
            j++;
           }
        }
            while (i < n) {
        arr[i] = 0;
        i++;
    }
    }
};

int main() {
    vector<int> arr = {0, 1, 0, 3, 12}; // You can change the input to test
    Solution sol;
    sol.moveZeroes(arr);
    for(int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}