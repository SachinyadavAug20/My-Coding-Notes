#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printprimefactors(vector<pair<int, int>> a);
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a);
void printVectSS(vector<pair<pair<int, int>, int>> a);

void printImage(vector<vector<int>> a) {
  for (auto v : a) {
    for (int n : v) {
      cout << n << " ";
    }
    cout << endl;
  }
}
void printVector(vector<int> a) {
  for (int n : a) {
    cout << n << " ";
  }
  cout << endl;
}

int main(int argn, char *argv[]) { return 0; }

void printVect(vector<unsigned> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << "(" << a[i].first.first << "," << a[i].first.second << ") " << "("
         << a[i].second.first << "," << a[i].second.second << ") " << endl;
  }
}
void printVectSS(vector<pair<pair<int, int>, int>> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i].first.first << " " << a[i].first.second << " > " << a[i].second
         << endl;
  }
}

void printprimefactors(vector<pair<int, int>> a) {
  for (auto pr : a) {
    cout << pr.first << "^" << pr.second << " ";
  }
  cout << endl;
}





































































































































































































































class Solution {
public:
    // need to do in logn 
    // search for minimum element
    // min is to be tracked find -> pivote where not in increasing order
    // to get pivote may need O(n) so can't do that
    // let sorted and right sorted parts are different and need
    // after rotaton
    // left sorted -> always has value greater than right side
    // answer lies in right side
    int findMin(vector<int>& nums) {
        int ans=nums[0];
        int lo=0,hi=nums.size()-1;
        while(hi>=lo){
            if(nums[lo]<nums[hi]){
                // reached sorted range
                ans=min(ans,nums[lo]);
                break;
            }
            int mid=lo+(hi-lo)/2;
            ans=min(ans,nums[mid]);
            if(nums[mid]>=nums[lo]){ // we are on left sorted region go right
                lo=mid+1;
            }else{ // in right region go to left
                hi=mid-1;
            }
        }
        return ans;
    }
};
