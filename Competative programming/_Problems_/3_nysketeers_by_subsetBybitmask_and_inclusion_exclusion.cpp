#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<string> subsets(string s){
    vector<string> ans;
    int sz=(1<<s.size());
    for (int i = 1; i < sz; i++) {
        string str="";
        for (int j = 0; j < s.size(); j++) {
            if (i&(1<<j)) {
                str.push_back(s[j]);
            }
        }
        ans.push_back(str);
    }
    return ans;
}

int main(int argn, char *argv[]) {
    char v[5]={'a','e','i','o','u'};
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        unordered_map<string,int> hsh;
        for (int i = 0; i < n; i++) {
            string ch;
            cin>>ch;
            set<char> distinctV;
            for (char c:ch) {
                for (int j = 0; j < 5; j++) {
                    if (c==v[j]) {
                        distinctV.insert(c);
                        // cout<<"    "<<c<<endl;
                    }
                }
            }
            string str="";
            for (char c:distinctV) str+=c;
            auto a=subsets(str);
            for (string s:a) {
                hsh[s]++;
            }
        }
        
        // now to inclusion exclusion
        ll ctn=0;
        for(auto pr:hsh){
            ll n=pr.second;
            ll aa=(n)*(n-1)*(n-2)/6;
            if ((pr.first).size()%2==0) {
                ctn-=(aa);
            }else {
                ctn+=(aa);
            }
            // cout<<pr.first<<" > "<<pr.second<<endl;
        }
        cout<<ctn<<endl;
    }
    return 0;
}

// https://www.hackerearth.com/problem/algorithm/the-three-musketeers-6efd5f2d/
