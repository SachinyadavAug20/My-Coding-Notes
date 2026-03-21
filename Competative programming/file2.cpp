#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define ll long long

void printVect(vector<int> a);
void printprimefactors(vector<pair<int, int>> a);
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a);
void printVectSS(vector<pair<pair<int, int>, int>> a);

int binExpo(int a,int b,int m){
    int ans=1;
    while (b>0) {
        if (b&1) {
        ans=(ans*1LL*a)%m;
        }
        a=(a*1LL*a)%m;
        b=b>>1;
    }
    return ans;
}

int N=1e5+10;
int main(int argn, char *argv[]) {

    vector<bool> isPrime(101,1);
    vector<int> hp(101,0);
    hp[0]=hp[1]=0;
    isPrime[0]=isPrime[1]=0;
    for (int i=2; i<101; i++) {
        if (isPrime[i]) {
            for (int j=2*i; j<101; j+=i) {
                hp[j]=i;
                isPrime[j]=0;
            }
        }
    }

    map<int,vector<int>> primefact;
    primefact[0]={};
    primefact[1]={};
    for (int i=2; i<101; i++) {
        primefact[i]={};
        int n=i;
        while (n>1) {
            if (hp[n]==0 || hp[n]==1)
            {
                break;
            }
            primefact[i].push_back(hp[n]);
            n/=hp[n];
        }
        if (n>1)
        {
            primefact[i].push_back(n);
        }
    }


    // // print
    // for (auto something : primefact) {
    //     cout<<something.first<<" : ";
    //     for (int i  : something.second) {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }


    int n;
    cin>>n;
    // cout<<"1111111";
    vector<vector<int>> prefix(n+1);
    vector<int> arr(n,0);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for (int f  : primefact[arr[0]]) {
        prefix[0].push_back(f);
    }
    for (int i=1; i<n; i++) {

        int num=arr[i];
        prefix[i]=prefix[i-1];
        for (int f  : primefact[num]) {
            prefix[i].push_back(f);
        }
    }

    // for (int i=0; i<n; i++) {
    //     cout<<arr[i]<<" : ";
    //     for (auto pr   : prefix[i]) {
    //         cout<<pr<<" ";
    //     }
    //     cout<<endl;
    // }


    int t;
    cin>>t;
    while (t--) {
        int Li,Ri,M;
        cin>>Li>>Ri>>M;
           
        ll ans=1;
        ll up=1;
        ll down=1;
        if ((Li-2)>=0) {
            for (int a  : prefix[Li-2]) {
                up=(up*1LL*a);
                cout<<":::"<<up;
            }
        }
        for (int a : prefix[Ri-1]) {
            down=(down*a);
        }
        

        cout<<(down*binExpo(up, M-2, M)*1LL)%M<<endl;
    }
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

void printprimefactors(vector<pair<int, int>> a) {
  for (auto pr : a) {
    cout << pr.first << "^" << pr.second << " ";
  }
  cout << endl;
}
