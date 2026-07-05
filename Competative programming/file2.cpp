#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printprimefactors(vector<pair<int, int>> a);
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a);
void printVectSS(vector<pair<pair<int, int>, int>> a);

void printImage(vector<vector<int>> a) {
  for (auto v : a) {
    for (int n : v) {
      cout << n << " ";
    }
    cout << endl;
  }
}
void printVector(vector<int> a) {
  for (int n : a) {
    cout << n << " ";
  }
  cout << endl;
}

int main(int argn, char *argv[]) {
  int num;
  return 0;
}

void printVect(vector<unsigned> a) {
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

class Solution1 {
public:
  int minLights(vector<int> &lights) {
    int n = lights.size();
    vector<int> vis(n, 0);
    int ans = 0;
    int l_l = -1, l_r = -1; // already lights range
    for (int i = 0; i < n; i++) {
      int v = lights[i];
      if (v != 0) {
        int l = max(0, i - v);
        int r = min(n - 1, i + v);
        // do mark and the prefix sum
        vis[l]++;
        if (r == n - 1) {
        } else {
          vis[r + 1]--;
        }
      }
    }
    for (int i = 1; i < n; i++) {
      vis[i] = vis[i] + vis[i - 1];
    }
    for (int i = 0; i < n; i++) {
      if (!vis[i]) {
        if (i + 2 < n && !vis[i + 1]) {
          vis[i] = 1;
          vis[i + 1] = 1;
          vis[i + 2] = 1;
        } else if (i + 1 < n && !vis[i + 1]) {
          vis[i] = 1;
          vis[i + 1] = 1;
        } else {
          vis[i] = 1;
        }
        ans++;
      }
    }
    return ans;
  }
};

class Solution2 {
public:
  // L is cancel by R
  // U is cancel by D
  // _ alwasy works
  int maxDistance(string moves) {
    int xD = 0, yD = 0, d = 0;
    for (char ch : moves) {
      if (ch == 'L') {
        xD++;
      } else if (ch == 'R') {
        xD--;
      }
      if (ch == 'U') {
        yD++;
      } else if (ch == 'D') {
        yD--;
      }
      if (ch == '_') {
        d++;
      }
    }
    d += abs(xD);
    d += abs(yD);
    return d;
  }
};

class Solution3 {
public:
  int countValidSubarrays(vector<int> &nums, int x) {
    // prefix
    int n = nums.size();
    vector<long> prefix(n);
    prefix[0] = nums[0];
    for (int i = 1; i < n; i++) {
      prefix[i] = nums[i] + prefix[i - 1];
    }
    int ctn = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i; j < n; j++) {
        long ls = i - 1 < 0 ? 0 : prefix[i - 1];
        long rs = prefix[j];
        long sum = rs - ls;
        int fd = sum % 10;
        long ld = sum;
        while (ld >= 10) {
          ld /= 10;
        }
        if (fd == x && ld == x) {
          ctn++;
        }
      }
    }
    return ctn;
  }
};

class Solution1234567 {
public:
  vector<vector<int>>
  filterOccupiedIntervals(vector<vector<int>> &occupiedIntervals, int freeStart,
                          int freeEnd) {
    sort(occupiedIntervals.begin(), occupiedIntervals.end());
    int n = occupiedIntervals.size();
    int i = 0;
    vector<vector<int>> ans;

    while (i < n) {
      auto p = occupiedIntervals[i];
      int ois = p[0], oie = p[1];
      int j = i + 1;

      while (j < n) {
        if (occupiedIntervals[j][0] <= oie + 1) {
          oie = max(oie, occupiedIntervals[j][1]);
          j++;
        } else {
          break;
        }
      }
      i = j;

      if (oie < freeStart || ois > freeEnd) {
        ans.push_back({ois, oie});
      } else {
        // Left remaining part
        if (ois < freeStart) {
          ans.push_back({ois, freeStart - 1});
        }

        // Right remaining part
        if (oie > freeEnd) {
          ans.push_back({freeEnd + 1, oie});
        }
      }
    }
    return ans;
  }
};

class Solution8227 {
public:
  int maxDigitRange(vector<int> &nums) {
    int n = nums.size();
    vector<int> range(n);
    int maxDigitRange = 0;
    for (int i = 0; i < n; i++) {
      int num = nums[i];
      int Max = 0, Min = 9;
      while (num) {
        int d = num % 10;
        Max = max(Max, d);
        Min = min(Min, d);
        num = num / 10;
      }
      range[i] = abs(Max - Min);
      maxDigitRange = max(maxDigitRange, range[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (range[i] == maxDigitRange) {
        ans += nums[i];
      }
    }
    return ans;
  }
};

class Solution27 {
public:
  bool canMakeSubsequence(string s, string t) {
    int i = 0, j = 0;
    bool used = false;
    while (i < s.size() && j < t.size()) {
      if (s[i] == t[j]) {
        i++;
        j++;
      } else if (!used) {
        used = true;
        i++;
        j++;
      } else {
        j++;
      }
    }
    return i == s.size();
  }
};

class Solution {
public:
  int divisibleGame(vector<int> &nums) {

  }
};
