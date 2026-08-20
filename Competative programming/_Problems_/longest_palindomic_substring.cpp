#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    // plan
    // start at middle and expand outwards to make palindrome
    //
    string longestPalindrome(string s) {
        int n=s.size();
        string res="";
        int resLen=0;
        for(int i=0;i<n;i++){
            // odd length
            int l=i,r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>resLen){
                    res=s.substr(l,r-l+1);
                    resLen=r-l+1;
                }
                l--;
                r++;
            }
            // even length
            l=i,r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>resLen){
                    res=s.substr(l,r-l+1);
                    resLen=r-l+1;
                }
                l--;
                r++;
            }
        }
        return res;
    }
};
