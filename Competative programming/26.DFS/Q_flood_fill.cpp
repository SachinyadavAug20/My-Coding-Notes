// You are given an image represented by an m x n grid of integers image, where image[i][j] represents the pixel value of the image. You are also given three integers sr, sc, and color. Your task is to perform a flood fill on the image starting from the pixel image[sr][sc].
//
// To perform a flood fill:
//
//     Begin with the starting pixel and change its color to color.
//     Perform the same process for each pixel that is directly adjacent (pixels that share a side with the original pixel, either horizontally or vertically) and shares the same color as the starting pixel.
//     Keep repeating this process by checking neighboring pixels of the updated pixels and modifying their color if it matches the original color of the starting pixel.
//     The process stops when there are no more adjacent pixels of the original color to update.
//
// Return the modified image after performing the flood fill.

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printImage(vector<vector<int>> a) {
  for (auto v : a) {
    for (int n : v) {
      cout << n << " ";
    }
    cout << endl;
  }
}

// My code : 20% speed
vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color) {

  int n = image.size(),m=image[0].size();
  // vector<vector<int>> o = image;
  int currColor = image[sr][sc];
    if (currColor == color) return image;
  image[sr][sc]=color;
  if ((sr + 1 < n && image[sr + 1][sc] == currColor))  image = floodFill(image, sr + 1, sc, color);
  if ((sc + 1 < m && image[sr][sc + 1] == currColor))  image = floodFill(image, sr, sc + 1, color);
  if ((sr - 1 >= 0 && image[sr - 1][sc] == currColor))  image = floodFill(image, sr - 1, sc, color);
  if ((sc - 1 >= 0 && image[sr][sc - 1] == currColor))  image = floodFill(image, sr, sc - 1, color);
  return image;
}

// SIR : 100% speed
void dfs(int i,int j,int initColor,int color,vector<vector<int>> &image){
    int n=image.size(),m=image[0].size();
    if ((i<0 || j<0) || (i>=n || j>=m)) return;
    if (image[i][j]!=initColor || image[i][j]==color) return; 
    image[i][j]=color;
    dfs(i+1, j, initColor, color, image);
    dfs(i-1, j, initColor, color, image);
    dfs(i, j+1, initColor, color, image);
    dfs(i, j-1, initColor, color, image);
} // not used visited as colored marked visited alredy by changing color
vector<vector<int>> floodFillSIR(vector<vector<int>> &image, int sr, int sc, int color) {
    dfs(sr,sc,image[sr][sc],color,image);
    return image;
}



int main(int argn, char *argv[]) {
  int n,m, sr, sc, color;
  cin >> n>>m >> sr >> sc >> color;
  vector<vector<int>> image(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int px;
      cin >> px;
      image[i].push_back(px);
    }
  }
  printImage(image);
  cout<<endl;
  printImage(floodFill(image, sr, sc, color));
  printImage(floodFillSIR(image, sr, sc, color));
  return 0;
}
