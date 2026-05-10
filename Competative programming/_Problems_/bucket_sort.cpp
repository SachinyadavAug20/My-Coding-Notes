// https://neetcode.io/problems/sort-colors/
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution_2_pass {
public:
    void sortColors(vector<int>& nums) {
        vector<int> hsh(3,0);// color : freq hsh
        int n=nums.size();
        for(int i=0;i<n;i++){
            hsh[nums[i]]++;
        }
        int nums_i=0;
        for(int i=0;i<3;i++){
            int val=i;
            int freq=hsh[i];
            for(int i=0;i<freq;i++){
                nums[nums_i]=val;
                nums_i++;
            }
        }
    }
}; // O(2n) and O(1)



// single pass possible here buz only 3 buckets
class Solution_1_pass {
public:
    void sortColors(vector<int>& nums) {
    // swap with 2 pointer 
        int n=nums.size();
        int i_front=0,i_rear=n-1,temp;
        for(int i=0;i<=i_rear;i++){
            int curr_value=nums[i];
            if(curr_value==0){
                temp=nums[i_front];
                nums[i_front]=curr_value;
                nums[i]=temp;
                i_front++;
            }
            if(curr_value==2){
                temp=nums[i_rear];
                nums[i_rear]=curr_value;
                nums[i]=temp;
                i_rear--;
                i--;
            }
        }
    }
}; // O(n) and O(1)
