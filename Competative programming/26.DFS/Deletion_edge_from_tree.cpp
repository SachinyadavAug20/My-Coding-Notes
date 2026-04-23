// Given an undirected tree with N nodes labeled from 1 to N.
//
// Each node has a certain weight assigned to it given by an integer array A of size N.
//
// You need to delete an edge in such a way that the Product between the sum of weights of nodes in one subtree with the sum of weights of nodes in other subtree is maximized.
//
// Return this maximum possible product modulo 109 + 7.

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e5+10;
const int M=1e9+7;
vector<vector<int>> tree(N);
vector<int> wt(N);
vector<int> subtreeSum(N);

// int Solution::deleteEdge(vector<int> &A, vector<vector<int> > &B) {
//     int n=A.size();
//     vector<vector<int>> tree(n+1);
//     vector<int> wt(n+1);
//     vector<ll> subtreeSum(n+1);
//     for(int i=1;i<=n;i++){
//         wt[i]=A[i-1];
//     }
//     for (int i = 0; i < n-1; i++) {
//         int v1=B[i][0],v2=B[i][1];
//         tree[v1].push_back(v2);
//         tree[v2].push_back(v1);
//     }
//     Qdfs(1,-1,tree,wt,subtreeSum);
//     ll max_product=-1;
//     for(int i=2;i<=n;i++){
//         ll s1=subtreeSum[i];
//         ll s2=subtreeSum[1]-s1;
//         max_product=max(max_product*1LL,(s1*s2));
//     }
//     return max_product%M;
// }
// void Qdfs(int v,int p,vector<vector<int>> &tree,vector<int> &wt,vector<ll> &subtreeSum){
//     subtreeSum[v]=wt[v];
//     for(int child : tree[v]){
//         if(child==p) continue;
//         Qdfs(child,v,tree,wt,subtreeSum);
//         subtreeSum[v]+=subtreeSum[child];
//     }
// }

void dfs(int v,int p=-1){
    subtreeSum[v]=wt[v];
    for(int child : tree[v]){
        if(child==p) continue;
        dfs(child,v);
        subtreeSum[v]+=subtreeSum[child];
    }
}

int main(int argn, char *argv[]) {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>wt[i];
    }
    for (int i = 0; i < n-1; i++) {
        int v1,v2;
        cin>>v1>>v2;
        tree[v1].push_back(v2);
        tree[v2].push_back(v1);
    }
    dfs(1);
    // delete edge one by one
    int max_product=-1;
    for(int i=2;i<=n;i++){
        int s1=subtreeSum[i];
        int s2=subtreeSum[1]-s1;
        max_product=max(max_product*1LL,(s1*1LL*s2)%M);
    }
    cout<<max_product<<endl;
  return 0;
}
