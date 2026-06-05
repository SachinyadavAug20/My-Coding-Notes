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
