// https://leetcode.com/problems/rotate-array/submissions/2008237324/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class MySolution_using_stack {
public:
  void rotate(vector<int> &nums, int k) {
    int n = nums.size();
    stack<int> snums;
    stack<int> enums;
    k = k % n;
    for (int i = n - 1; i >= 0; i--) {
      int num = nums[i];
      if (i >= n - k) {
        enums.push(num);
      } else {
        snums.push(num);
      }
    }
    int i = 0;
    while (!enums.empty()) {
      nums[i] = enums.top();
      cout << "e :" << nums[i] << endl;
      enums.pop();
      i++;
    }
    while (!snums.empty()) {
      nums[i] = snums.top();
      cout << "s :" << nums[i] << endl;
      snums.pop();
      i++;
    }
  } // O(n) time and O(n) space MySolution_using_stack
};


class Sir_Solution_reverse {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size(); // 1,2,3,4,5     k=2
        k%=n;
        reverse(nums.begin(), nums.begin()+n);  // 5,4,3,2,1
        // reverse 1st k element ==>  // 4,5,3,2,1
        reverse(nums.begin(),nums.begin()+k);
        // revser 2 nd part separately // 5,4,1,2,3 <-- required rotate-array
        reverse(nums.begin()+k, nums.begin()+n);
    } // O(n) time and O(1) space Sir_Solution_reverse
};
