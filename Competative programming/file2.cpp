#include <bits/stdc++.h>
#include <unordered_set>
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

class Solution879 {
public:
  int secondsBetweenTimes(string startTime, string endTime) {
    int ans = 0;
    ans +=
        60 * 60 * (stoi(endTime.substr(0, 2)) - stoi(startTime.substr(0, 2)));
    ans += 60 * (stoi(endTime.substr(3, 5)) - stoi(startTime.substr(3, 5)));
    ans += (stoi(endTime.substr(6, 8)) - stoi(startTime.substr(6, 8)));
    return ans;
  }
};

const int M = 1e9 + 7;
class Solution781 {
public:
  long long power(long long a, long long b) {
    long long ans = 1;
    while (b) {
      if (b & 1)
        ans = ans * a % M;
      a = a * a % M;
      b >>= 1;
    }
    return ans;
  }

  int minimumCost(vector<int> &nums, int k) {
    long long ans = 0, n = nums.size();
    long long resource = k;
    long long fact = 1;
    for (int i = 0; i < n; i++) {
      int num = nums[i];
      if (num > resource) {
        long long diff = num - resource;
        long long cost = ((diff + k - 1) / k);

        // for(int i=1;i<=cost;i++){
        //   ans+=fact;
        //   fact++;
        // }

        // long long den=(((2*fact+cost-1))*cost);
        // ans+=(den/2)%M;

        long long inv2 = power(2, M - 2);
        long long sum = ((2 * fact + cost - 1) % M) * (cost % M) % M;
        sum = sum * inv2 % M;
        ans+=sum;
        ans = ans % M;
        fact += cost;
        resource += cost * k;
      }
      resource -= num;
    }
    return ans;
  }
};

class Solution12 {
public:
    vector<string> createGrid(int m, int n, int k) {
        vector<string> ans(m);
        for(int i=0;i<m;i++){
          string s="";
          for(int j=0;j<n;j++){
            if(i==0) s+='.';
            else if(j>=n-k) s+='.';
            else s+='#';
          }
          ans[i]=s;
        }
        return ans;
    }
};
class Solution567 {
public:
    string rearrangeString(string s, char x, char y) {
        string ans;
        for (char c : s) {
            if (c == y)
                ans += c;
        }
        for (char c : s) {
            if (c != x && c != y)
                ans += c;
        }
        for (char c : s) {
            if (c == x)
                ans += c;
        }
        return ans;
    }
};
class Solution19 {
public:
    long long maximumValue(int n, int s, int m) {
        long long peaksLowFirst = n / 2;
        long long ans1 = 1LL * s + peaksLowFirst * m;
        if (peaksLowFirst > 0)
            ans1 -= (peaksLowFirst - 1);
        long long peaksHighFirst = (n + 1LL) / 2;
        long long ans2 = 1LL * s + (peaksHighFirst - 1) * (m - 1LL);
        return max(ans1, ans2);
    }
};












class Solution72 {
public:
    vector<int> target;
    bool found = false;
    int dx[8] = {1, 2, -1, -2, 1, 2, -1, -2};
    int dy[8] = {2, 1, -2, -1, -2, -1, 2, 1};
    void dfs(int x, int y, int parity, vector<vector<vector<bool>>> &vis) {
        if (x < 0 || x >= 8 || y < 0 || y >= 8)
            return;
        if (vis[x][y][parity])
            return;
        vis[x][y][parity] = true;
        if (x == target[0] && y == target[1] && parity == 0) {
            found = true;
            return;
        }
        for (int k = 0; k < 8 && !found; k++) {
            dfs(x + dx[k], y + dy[k], parity ^ 1, vis);
        }
    }

    bool canReach(vector<int>& start, vector<int>& target) {
        this->target = target;
        vector<vector<vector<bool>>> vis(
            8, vector<vector<bool>>(8, vector<bool>(2, false)));
        dfs(start[0], start[1], 0, vis);
        return found;
    }
};

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution2939 {
public:
    int nD=0;
    int dfs(TreeNode* node,int cm=-1){
        if(node==NULL) return cm;
        int lcm=max(cm,dfs(node->left,cm));
        int rcm=max(cm,dfs(node->right,cm));
        cm=max(lcm,rcm);
        cm=max(cm,node->val);
        if(cm==node->val){
            cout<<node->val<<endl;
            nD++;
        }
        return cm;
    }
    int countDominantNodes(TreeNode* root) {
        nD=0;
        dfs(root);
        return nD;
    }
};

class Solution {
public:
    vector<bool> transformStr(string s, vector<string>& strs) {
        int n= s.size();
    }
};
