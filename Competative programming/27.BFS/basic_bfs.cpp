#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e5+10;
vector<vector<int>> tree(N);
vector<int> visted(N,0);
vector<int> level(N);

void bfs(int source){
    queue<int> qu;
    qu.push(source);
    visted[source]=1;
    while(!qu.empty()){
        int curr_n=qu.front();
        qu.pop();
        cout<<curr_n<<" > ";
        for (int child: tree[curr_n]) {
            if(!visted[child]){ 
                qu.push(child);
                visted[child]=1;
                level[child]=level[curr_n]+1;
                cout<<child<<" ";
            }
        }
        cout<<endl;
    }
} // v1 -> e1, v2 -> e2 ... total = e1+e2+e3+...=V+E
  // O(V+E) as as of dfs

int main(int argn, char *argv[]) {
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int v1,v2;
        cin>>v1>>v2;
        tree[v1].push_back(v2);
        tree[v2].push_back(v1);
    }
    bfs(1);
    for(int i=1;i<=n;i++){
        cout<<level[i]<<endl;
    }

  return 0;
}
