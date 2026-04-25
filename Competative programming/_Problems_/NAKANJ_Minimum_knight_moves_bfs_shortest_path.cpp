// https://www.spoj.com/problems/NAKANJ/


#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<int>> vis(8, vector<int>(8,0));
vector<vector<int>> level(8, vector<int>(8,0));

pair<int,int> stringToPos(string s){
        return {s[0]-'a',s[1]-'1'};
}
void reset(){
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            level[i][j]=0;
            vis[i][j]=0;
        }
    }
}

vector<pair<int,int>> movements={
    {1,2},{-1,2},
    {1,-2},{-1,-2},
    {2,1},{-2,1},
    {2,-1},{-2,-1},
};
bool isValidCord(pair<int,int> p){
    if(p.first<0 || p.second<0) return false;
    if(p.first>=8 || p.second>=8) return false;
    if(vis[p.first][p.second]) return false;
    return true;
}


int bfs(string sr,string des){
    int sourceX=stringToPos(sr).first,sourceY=stringToPos(sr).second;
    int destinationX=stringToPos(des).first,destinationY=stringToPos(des).second;
    queue<pair<int,int>> q;

    pair<int,int>curr_p={sourceX,sourceY};
    q.push(curr_p);
    vis[curr_p.first][curr_p.second]=1;
    while (!q.empty()) {
        curr_p=q.front();
        q.pop();
        for(auto movement:movements){
            pair<int,int> newCor={curr_p.first+movement.first,curr_p.second+movement.second};
            if(isValidCord(newCor)){
                q.push(newCor);
                vis[newCor.first][newCor.second]=1;
                level[newCor.first][newCor.second]=level[curr_p.first][curr_p.second]+1;
            }
        }
    }
    return level[destinationX][destinationY];
}

int main(int argn, char *argv[]) {
    int q;
    cin>>q;
    while (q--) {
        string p1,p2;
        cin>>p1>>p2;
        reset();
        cout<<bfs(p1, p2)<<endl;
    }
  return 0;
}
