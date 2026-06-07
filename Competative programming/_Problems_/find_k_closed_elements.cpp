// https://leetcode.com/problems/find-k-closest-elements/submissions/2025492720/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class SolutionSIR {
public:
    // observe : answer must be a window of arr
    // we need best k size window for x 
    // find index of target using lower bound
    // Elegant Solution
    // search for window itself size of window is k
    // for l =0 to r=n-k
    // check is this best value outside -> possible sift will next window be better
    //
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        int l=0,r=n-k;
        while(l<r){
            int m=(l+r)/2;
            if(x-arr[m]>arr[m+k]-x){
                l=m+1;
            }else{
                r=m;
            }
        }
        vector<int> ans;
        for(int i=l;i<l+k;i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        auto it = lower_bound(arr.begin(), arr.end(), x);
        int r = distance(arr.begin(), it);
        int l = r - 1;

        while (k > 0) {
            if (l < 0) {
                r++; 
            } else if (r >= arr.size()) {
                l--; 
            } else if (abs(arr[l] - x) <= abs(arr[r] - x)) {
                l--; 
            } else {
                r++; 
            }
            k--;
        }
        
        // start at l + 1, stop before r
        vector<int> ans;
        for(int i=l+1;i<r;i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};

