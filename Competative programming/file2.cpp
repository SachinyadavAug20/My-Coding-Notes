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

int main(int argn, char *argv[]) {
    int num;
    return 0; 
}

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
    // to find sum to target by smallest sz
    // can find by sliding window
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        vector<int> preSum(n),postSum(n);
        preSum[0]=nums[0];
        for(int i=1;i<n;i++){
            preSum[i]=preSum[i-1]+nums[i];
        }

        int ans=INT_MAX;
        int l=0;
        for(int i=0;i<n && l<n;i++){
            int lsum=l-1>=0?preSum[l-1]:0;
            int rsum=preSum[i];

            int wSum=rsum-lsum;
            int ww=i+1-l;
            if(wSum>=target){ // valid be greedy
              ans=min(ans,ww);
              // shrink
                l++;
                i--;

            }  
        }
        return ans==INT_MAX?0:ans;
    }
};

