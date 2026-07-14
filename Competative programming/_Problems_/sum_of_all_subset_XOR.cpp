#include <bits/stdc++.h>
using namespace std;
#define ll long long

class SolutionBRUTE {
public:
  // can do :-> (2^n) Solution
  // as 12 max size

    int subsetXORSum(vector<int>& nums) {
      int n=nums.size();
      int poss=1<<n;
      int ans=0;
      for(int i=0;i<poss;i++){
        int c=i;
        int sum=0;
        for(int i=0;i<n && c;i++){
            if(c&1) sum^=nums[i];
            c>>=1;
        }
        ans+=sum;
      }
      return ans;
    }
};

class Solution {
public:
  // can do it O(n)
  // subset(around 2^n subset) != subarray(around n^2 subarray)
  // it is mathematically
  // combinatorics -> 
  // each element will be included in exactly half of the subset
  // 2^3 subset -> how many have 4th bit set => 0
  // see binary of each number and analyse
  // no of having 3rd bit set 
  // no of having 2rd bit set => only 1 bit(then)
  // if it occurs half of the time then, do multiple by it instead of adding

    int subsetXORSum(vector<int>& nums) {
      int ans=0;
      for(int i=0;i<nums.size();i++){
        ans|=nums[i];
      }
      return ans<<(nums.size()-1);
    }
};
