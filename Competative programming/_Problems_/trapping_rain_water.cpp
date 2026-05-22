// https://leetcode.com/problems/trapping-rain-water/submissions/2010030502

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution_time_optimized {
public:
  int trap(vector<int> &height) {
    // on top of 1st and last pillar water can't stay
    // max height of left and min height of right
    // hashing
    int n = height.size();
    vector<int> lMax(n);
    lMax[0] = height[0];
    for (int i = 1; i < n; i++) {
      lMax[i] = max(height[i], lMax[i - 1]);
    }
    vector<int> rMax(n);
    rMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
      rMax[i] = max(height[i], rMax[i + 1]);
    }

    int ans = 0;
    for (int i = 1; i < n - 1; i++) {
      int water = min(lMax[i - 1], rMax[i + 1]) - height[i];
      // cout<<": "<<lMax[i-1]<<" "<<rMax[i+1]<<endl;
      if (water > 0) {
        // cout<<"   "<<water<<endl;
        ans += water;
      }
    }
    return ans;
  } // O(n) time and O(n) space solution
};

class Solution_time_and_space_optimized {
public:
  int trap(vector<int> &height) {
    // on top of 1st and last pillar water can't stay
    // max height of left and min height of right -> do calculation on true and should be less 
    int n = height.size();
    int ans = 0;
    int l = 0, maxl = height[0];
    int r = n - 1, maxr = height[n - 1];
    for (; r > l;) {
        if(maxl<=maxr){
            int wa=maxl-height[l];
            l++;
            if(wa>0) ans+=wa;
            maxl=max(maxl,height[l]);
        }else{
            int wa=maxr-height[r];
            r--;
            if(wa>0) ans+=wa;
            maxr=max(maxr,height[r]);
        }
        cout<<" "<<ans<<endl;
    }
   return ans;
  } // O(n) time and O(1) space
};
