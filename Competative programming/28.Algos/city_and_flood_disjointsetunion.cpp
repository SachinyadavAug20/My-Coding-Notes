// https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-flood-1/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e5+10;
int parent[N];
int sz[N]; // size of tree=no of node
void make(int v){
    parent[v]=v;
    sz[v]=1; // initilized
}
int find(int v){
    if(v==parent[v])return v;
        // WAY 1: 
        // int a=parent[v];
        // while(a!=parent[v]){
        //     a=parent[v];
        // }
        // return a;
    return parent[v]=find(parent[v]); // path compression
}
void Union(int a,int b){
    // join root
    a=find(a); // root 1
    b=find(b); // root 1
    if(a!=b){ // if not in same tree
        if(sz[a]<sz[b]) swap(a,b); // union by sz
        // a is bigger than b
        parent[b]=a;
        sz[a]+=sz[b];
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        make(i);
    }
    while(m--){
        int i,j;
        cin>>i>>j;
        Union(i,j);
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(find(i)==i) ans++;
    }
    cout<<ans;
    return 0;
}

