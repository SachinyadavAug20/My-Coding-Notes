// https://leetcode.com/problems/search-a-2d-matrix/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class SolutionSpaceous {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> arr;
        for(auto aaa:matrix){
            for(auto aa: aaa){
                arr.push_back(aa);
            }
        }
        int lo=0,hi=arr.size()-1;
        while(hi-lo>1){
            int mid=(hi+lo)/2;
            if(arr[mid]<target){
                lo=mid;
            }else{
                hi=mid;
            }
        }
        bool ans=false;
        if(arr[lo]==target)ans=true;
        else if(arr[hi]==target) ans=true;
        return ans;
    }// O(N) space and O(logn) time 
};


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ans=false;
        for(auto aa:matrix){
            int lo=0,hi=aa.size()-1;
            while(hi-lo>1){
                int mid=(hi+lo)/2;
                if(aa[mid]<target){
                    lo=mid;
                }else{
                    hi=mid;
                }
            }
            if(aa[lo]==target || aa[hi]==target){
                ans=true;
                break;
            }
            if(aa[aa.size()-1]>target) break;
        }
        return ans;
    }// O(1) space and O(logn) time 
};

