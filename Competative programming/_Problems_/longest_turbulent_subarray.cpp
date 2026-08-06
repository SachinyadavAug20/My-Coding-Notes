#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    // plan
    // Sliding window + kadames 
    int maxTurbulenceSize(vector<int>& arr) {
        int n=arr.size();
        int l=0,r=1;
        int ans=1;
        string prev="";
        while(r<n){
            if(arr[r-1]>arr[r] && prev!=">"){
                ans=max(ans,r-l+1);
                r++;
                prev=">";
            }else if(arr[r-1]<arr[r] && prev!="<"){
                ans=max(ans,r-l+1);
                r++;
                prev="<";
            }else{
                r=arr[r-1]==arr[r]?r+1:r; // skip equal sign
                l=r-1;
                prev="";
            }
        }
        return ans;
    }
};
