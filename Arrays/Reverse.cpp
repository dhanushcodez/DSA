#include <bits/stdc++.h>
using namespace std;
void reverse_it(vector<int> &arr){
    int i =0, j= arr.size()-1;
    while(i<=j){
       swap(arr[i],arr[j]);
       i++;
       j--;
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    reverse_it(arr);
    for(int i = 0; i < arr.size(); i++)
    {
       cout << arr[i] << " ";
    }
    return 0;
}