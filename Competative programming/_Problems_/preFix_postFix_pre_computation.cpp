// https://leetcode.com/problems/product-of-array-except-self/description/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>prePro(n);
        prePro[0]=nums[0];
        vector<int>postPro(n);
        postPro[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            prePro[i]=prePro[i-1]*nums[i];
        }
        for(int i=n-2;i>=0;i--){
            postPro[i]=postPro[i+1]*nums[i];
        }
        vector<int>ans(n);
        ans[0]=postPro[1];
        ans[n-1]=prePro[n-2];
        for(int i=1;i<n-1;i++){
            ans[i]=prePro[i-1]*postPro[i+1];
        }
        return ans;
    }
};
