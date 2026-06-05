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
                    hsh[s[l]-'A']++;
                    l++;
                }
            }while(charToReplce>k);
            ans=max(ans,i-l+1);
        }
        return ans;
        
    }
};
