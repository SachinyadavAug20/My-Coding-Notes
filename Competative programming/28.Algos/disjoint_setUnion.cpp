#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e5+10;
int parent[N];
void make(int v){
    parent[v]=v;
}
int find(int v){
    if(v==parent[v])return v;
        // WAY 1: 
        // int a=parent[v];
        // while(a!=parent[v]){
        //     a=parent[v];
        // }
        // return a;
    return find(parent[v]);
}
void Union(int a,int b){
    // join root
    a=find(a); // root 1
    b=find(b); // root 1
    if(a!=b){ // if not in same tree
        parent[b]=a;
    }
}

int main(){

}
