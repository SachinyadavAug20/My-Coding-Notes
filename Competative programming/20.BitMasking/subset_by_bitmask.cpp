#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printBinary(int num) {
  for (int i = 31; i >= 0; i--) {
    cout << ((num >> i) & 1);
  }
  cout << endl;
}

int main(int argn, char *argv[]) {
  // print all subset of given array
  int n;
  cin>>n;
    vector<int> arr(n,0);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    vector<vector<int>> ans;
    // It bit mask are numbers from 0 to 2^n - 1
    for (int bitmask=0; bitmask<(1<<n); bitmask++) {
        // printBinary(bitmask);
        vector<int> ans1;
        for (int i = 31; i >= 0; i--) {
            // check if bit ith bit is set
          int checkerr=(1<<i);
          int out=(checkerr&bitmask);
            if(out){
                ans1.push_back(arr[i]);
            }
        }
        ans.push_back(ans1);
        printf("\n");
    }

  return 0;
}

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
    
    vector<vector<int>> ans;
    // It bit mask are numbers from 0 to 2^n - 1
    for (int bitmask=0; bitmask<(1<<(nums.size())); bitmask++) {
        // printBinary(bitmask);
        vector<int> ans1;
        for (int i = 31; i >= 0; i--) {
            // check if bit ith bit is set
          int checkerr=(1<<i);
          int out=(checkerr&bitmask);
            if(out){
                ans1.push_back(nums[i]);
            }
        }
        ans.push_back(ans1);
        printf("\n");
    }
    return ans;
    }
};

// Time Complexity O(2^n * 31) = O(n* 2^n)
