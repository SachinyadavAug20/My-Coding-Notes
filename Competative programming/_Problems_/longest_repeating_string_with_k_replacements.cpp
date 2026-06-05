// https://leetcode.com/problems/longest-repeating-character-replacement/description/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    // can chose only uppercase english char A-Z 26
    // replace wih
    // Solution
    // we want all characters in a particular window to match most frequernt character in the window
    int characterReplacement(string s, int k) {
        int n=s.size();
        int l=0;
        int ans=0;
        vector<int> hsh(26,0);
        for(int i=0;i<n;i++){
            hsh[s[i]-'A']++;
            int charToReplce=0;
            do{
                // a window is valid iff
                // hsh windowLen - count(mostfreq)(cmfc)
                int cmfc=*max_element(hsh.begin(),hsh.end());
                charToReplce=i-l+1-cmfc;
                if(charToReplce>k){
                    hsh[s[l]-'A']--;
                    l++;
                }
            }while(charToReplce>k);
            ans=max(ans,i-l+1);
        }
        return ans;
        
    }
};

