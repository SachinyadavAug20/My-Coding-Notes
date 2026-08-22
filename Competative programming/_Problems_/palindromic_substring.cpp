#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    // plan
    // same, read from 1 word to see if is plaindrome
    //
    int countSubstrings(string s) {
        int n=s.size();
        int res=0;
        int resLen=0;
        for(int i=0;i<n;i++){
            // odd length
            int l=i,r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>resLen){
                    resLen=r-l+1;
                }
                l--;
                r++;
                res++;
            }
            // even length
            l=i,r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>resLen){
                    resLen=r-l+1;
                }
                l--;
                r++;
                res++;
            }
        }
        return res;
    }
};
