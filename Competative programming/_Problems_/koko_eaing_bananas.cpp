// https://leetcode.com/problems/koko-eating-bananas/description/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    // possible values of k are 0, maximumSze(any pile) eat 
    // can test for each k using binary search
    // time complexity -> O(log(maxsize)*n)
    // it is boolean binary false false false true true true
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo=1,hi=*max_element(piles.begin(),piles.end()),ans=hi;
        while(hi>=lo){
            int mid=lo+(hi-lo)/2;
            long long time=0;
            for(int pile:piles){
                long long th=pile/mid;
                if(th*mid<pile){
                    th++;
                }
                time+=th;
            }
            if(time<=h){ // can be solution
                ans=min(ans,mid);
                hi=mid-1;
            }else{ // rate is slow and need to increase speed
                lo=mid+1;
            }
        }
        return ans;
    }
};

