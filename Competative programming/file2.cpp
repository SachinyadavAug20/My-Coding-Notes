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
        // non-decreasing order -> complex
    // need to know in left(lo<mid) and right portion
    // if repeated it wll be hard to say where we are.
    // can't element thing out. => O(n)  worst case
    // because lo==mid
    bool search(vector<int>& nums, int target) {
        int lo=0,hi=nums.size()-1;
        while(hi>=lo){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return 1;
            if(nums[lo]<nums[mid]){ // left sorted
                if(nums[lo]<=target && target<nums[mid]){
                    hi=mid-1;
                }else{
                    lo=mid+1;
                }
            }else if(nums[lo]>nums[mid]){
              if(nums[mid]<target && target <=nums[hi]){ // target in range
                  lo=mid+1;
              }else{
                  hi=mid-1;
              }
            }else{
                lo++;
            }
        }
        return 0;
    }
};
