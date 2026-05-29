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
