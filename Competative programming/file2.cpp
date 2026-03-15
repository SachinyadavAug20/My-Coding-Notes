#include <bits/stdc++.h>
#include <utility>
#include <vector>
using namespace std;
#define ll long long

const int M = 1337;

void printVect(vector<int> a);
void printprimefactors(vector<pair<int, int>> a){
    for (auto pr  : a) {
    cout<<pr.first<<"^"<<pr.second<<" ";
    }
    cout<<endl;
}
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a);
void printVectSS(vector<pair<pair<int, int>, int>> a);


vector<int> divisorBruteForce(int n){
    vector<int> ans;
    for (int i=1; i<=n; i++) {
        if (n%i==0) {
        ans.push_back(i);
        }
    }
    cout<<"count : "<<ans.size()<<endl;
    cout<<"sum : "<<accumulate(ans.begin(),ans.end(),0)<<endl;
    return ans;
}   // O(n)

vector<int> divisor_till_root_n(int n){
    vector<int> ans;
    for (int i=1; i*i<=n; i++) {
        if (n%i==0) {
            ans.push_back(i);
    // Problem it duplicates found in if n is perfect square
            if (i!=n/i) {
            ans.push_back(n/i);
            }
        }
    }
    cout<<"count : "<<ans.size()<<endl;
    cout<<"sum : "<<accumulate(ans.begin(),ans.end(),0)<<endl;

    return ans;
}   // O(sqrt(n))

vector<pair<int,int>> primeFactors(int n){
    vector<pair<int,int>> ans;
    int ctn=0;
    for (int i=2; i*i<=n; i++) {
        if (n%i==0) {
ctn=0;
            while (n%i==0) {
                ctn++;
            n/=i;
            }
            ans.push_back({i,ctn});
        }
    }
    if (n>1) {
    ans.push_back({n,1});
    }
    cout<<endl;
    return ans;
}

int main(int argn, char *argv[]) {
    int n;
    cin>>n; 
    printVect(divisorBruteForce(n));
    printVect(divisor_till_root_n(n));
    printprimefactors(primeFactors(n));
  return 0;
}
















































































































void printVect(vector<int> a) {
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
