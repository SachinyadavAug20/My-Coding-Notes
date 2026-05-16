// https://leetcode.com/problems/majority-element-ii/

#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <unordered_map>
using namespace std;
#define ll long long

class Solution_my {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> hsh; // value:freq
        for(int i=0;i<n;i++){
            hsh[nums[i]]++;
        }
        vector<int> ans;
        for(auto p:hsh){
            int c_n=p.first,c_f=p.second;
            if(3*c_f>n){
                ans.push_back(c_n);
            }
        }
        return ans;
    } // O(N) time and O(N) space
};

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size(),cp_n;
        vector<int> ans;
        // no more that 2 elements can be in answer array ans.size=0,1,2
        // size hsh map is less that 3. hsh map contain less than 3 thus, constant time
        unordered_map<int, int> hsh;
        unordered_map<int, int> hsh_un_modifed;
        for(int i=0;i<n;i++){
            hsh[nums[i]]++;
            hsh_un_modifed[nums[i]]++;
            if(hsh.size()<=2){
                continue;
            }
            
            unordered_map<int,int> cp_hsh;
            for(auto p:hsh){
                if(p.second>1){
                    cp_hsh[p.first]=p.second-1;
                }
            }
            hsh=cp_hsh;
        }

        // here at most 2 
        for(auto p:hsh){
            if(3*hsh_un_modifed[p.first]>n){
                ans.push_back(p.first);
            }
        }

        return ans;
    } // O(N) time and O(1) space
};
