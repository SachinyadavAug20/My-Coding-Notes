// https://leetcode.com/problems/network-delay-time/description/
// You are given a network of n nodes, labeled from 1 to n. You are also given times, a list of travel times as directed edges times[i] = (ui, vi, wi), where ui is the source node, vi is the target node, and wi is the time it takes for a signal to travel from source to target.
//
// We will send a signal from a given node k. Return the minimum time it takes for all the n nodes to receive the signal. If it is impossible for all the n nodes to receive the signal, return -1.


#include <bits/stdc++.h>
using namespace std;
#define ll long long

int N,M;
const int INF=1e9+10;

int dijkstra(vector<vector<pair<int,int>>>&g,int sr){
    vector<int> dist(N+1,INF);
    vector<int> visited(N+1,0);
    set<pair<int,int>> st; // wt,node --> as default sort by this 
    st.insert({0,sr});
    dist[sr]=0;
    pair<int,int> curr_p;

    while (st.size()>0) {
        curr_p=*st.begin();
        int v=curr_p.second,d=curr_p.first;
        st.erase(st.begin()); //pop
        if(visited[v])continue;
        visited[v]=1; // mark as visited after pop
    
        for(auto child:g[v]){
            int childv=child.first,w=child.second;
            int newdist= dist[v]+w;
            if(newdist<dist[childv]){
                dist[childv]=newdist;
                st.insert({dist[childv],childv});
            }
        }
    }
    int ans=-1;
    bool isSomeunreachable=0;
    for(int i=1;i<=N;i++){
        if(dist[i]==INF){
            isSomeunreachable=1;
            break;
        }
        ans=max(dist[i],ans);
    }
    return isSomeunreachable?-1:ans;
} // O(V+E*log(V)) log(V) as insertion in set

int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    N=n;
    M=times.size();
    vector<vector<pair<int,int>>> graph(n+1);
    for (int i=0; i<M; i++) {
        int v1=times[i][0],v2=times[i][1],w=times[i][2];
        graph[v1].push_back({v2,w});
    }
    return dijkstra(graph,k);
}

int main(int argn, char *argv[]) {
    int n,m;
    cin>>n>>m;
    vector<vector<int>>times(m);
    for (int i=0; i<m; i++) {
        int v1,v2,w;
        cin>>v1>>v2>>w;
        times[i].push_back(v1);
        times[i].push_back(v2);
        times[i].push_back(w);
    }
    // cout<<times[0][0]<<" "<<times[0][1]<<" "<<times[0][2]<<" ";
    int k;
    cin>>k;
    cout<<networkDelayTime(times , n, k);
    // cout<<times[0][0];
    
  return 0;
}
