// https://www.codechef.com/SNCKPB17/problems/SNSOCIAL/
// Read problems statements in Mandarin Chinese, Russian and Vietnamese as well.
//
// After a long duration of the painful, torturous and tumultuous periods of capitalism in Snakeland, now the snakes have decided to adopt socialism. The houses in Snakeland are arranged in a rectangular fashion of dimension n * m. The wealth of the snake in the house at cell (i, j) is given by a[i][j] rupees.
//
// A bill has been passed for making a smooth transition from capitalism to socialism. At the end of each hour, the wealth of a snake will grow and will become equal to the highest wealth that its neighbor had (at the start of the hour). That is, consider the maximum wealth among its neighbors at the start of the hour, and this snake's wealth will become equal to that at the end of the hour. Note that this increase in wealth will happen simultaneously for each snake. Two houses are said to be neighbors of each other if they share a side or corner with each other. Find out the minimum number of hours required for this transition.
// Input
//
// The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.
//
// The first line of each test case contains two space separated integers: n, m.
//
// Each of the next n lines contains m space separated integers. The j-th integer in the i-th row denotes a[i][j].
// Output
//
// For each test case output a single integer corresponding to the minimum number of hours required for the transition.
// Constraints
//
//     1 ≤ T ≤ 4
//     1 ≤ n, m ≤ 500
//     1 ≤ a[i][j] ≤ 106
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<pair<int, int>> moves={
    {1,0},{0,1},
    {1,1},{-1,1},
    {1,-1},{-1,-1},
    {-1,0},{0,-1}
};

int n,m;
bool isValid(pair<int,int> p){
    int i=p.first,j=p.second;
    if(i<0||j<0) return false;
    if(i>=n||j>=m) return false;
    return true;
}
pair<int, int> pairAdd(pair<int, int> p1,pair<int,int> p2){
    return {p1.first+p2.first,p1.second+p2.second};
}

int min_time_for_c_to_s(vector<vector<int>>&grid,int maxCost, vector<vector<int>>&level){
    n=grid.size(),m=grid[0].size();
    vector<pair<int, int>> sources;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==maxCost){
                sources.push_back({i,j});
            }
        }
    }

    queue<pair<int, int>> q;
    for(auto pr:sources){
        q.push(pr);

        level[pr.first][pr.second]=0;
    }
    pair<int, int> curr_v;
    while (!q.empty()) {
        curr_v=q.front();
        q.pop();
        for(auto p:moves){
            pair<int,int> child=pairAdd(curr_v, p);
            if(!isValid(child)) continue;
            if(grid[child.first][child.second]==maxCost)continue;// replace visited
            grid[child.first][child.second]=maxCost;
            q.push(child);
            level[child.first][child.second]=level[curr_v.first][curr_v.second]+1;
            // cout<<"   "<<level[child.first][child.second]<<"   "<<level[curr_v.first][curr_v.second]<<"   "<<child.first<<","<<child.second<<"  > "<<curr_v.first<<","<<curr_v.second<<endl;
        }
    }
    int max_level=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            max_level=max(max_level,level[i][j]);
        }
    }
    return max_level;
}

int main(int argn, char *argv[]) {
    int q;
    cin>>q;
    while (q--) {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> grid(n,vector<int>(m));
        vector<vector<int>> level(n,vector<int>(m,-1));
        int maxCost=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>grid[i][j];
                maxCost=max(maxCost,grid[i][j]);
            }
        }
        cout<<min_time_for_c_to_s(grid,maxCost,level)<<endl;
    }
  return 0;
}
