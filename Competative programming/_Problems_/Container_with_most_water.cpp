// https://leetcode.com/problems/container-with-most-water/description/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    int maxArea_BruteForce(vector<int>& height) {
        int n=height.size();
        long long area=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int w=(j-i),h=min(height[i],height[j]);
                long long a=w*h;
                area=max(a,area);
            }
        }
        return (int)area;
    }
    int maxArea(vector<int>& height) {
        // logic : for maximize width and height 2pointer
        int n=height.size();
        int r=n-1;
        long long area=0;
        for(int l=0;l<r;l++){
            int numl=height[l],numr=height[r];
            area=max(area,(r-l)*1LL*(min(numl,numr)));
            if(numl>numr){
                r--;
                l--; // to null-fy effect of l++
            }
        }
        return area;
    }
};
