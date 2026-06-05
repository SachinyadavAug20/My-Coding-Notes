// https://leetcode.com/problems/permutation-in-string/submissions/2023497360/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // window size is s1.length
        int n1=s1.size(),n2=s2.size();
        if(n1 > n2) return 0;
        vector<int> hsh1(26,0);
        vector<int> hsh2(26,0);
        for(int i=0;i<n1;i++){
            hsh1[s1[i]-'a']++;
        }
        for(int i=0;i<n1;i++){
            hsh2[s2[i]-'a']++;
        }
        int l=0;
        int i=n1;
        int match=1;
        for(int j=0;j<26;j++){
            if(hsh1[j]!=hsh2[j]){ match=0; break;}
        }
        if(match){
            return 1;
        }
        while(i<n2){
            hsh2[s2[i]-'a']++;
            hsh2[s2[l]-'a']--;
            int match=1;
            for(int j=0;j<26;j++){
                if(hsh1[j]!=hsh2[j]){ match=0; break;}
            }
            if(match){
                return 1;
            }
            i++;
            l++;
        }
        return 0;
    } // O(26*n2) time
};

