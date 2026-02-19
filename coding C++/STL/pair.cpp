#include <bits/stdtr1c++.h>

using namespace std;

int main()
{
    pair<int, int> p[2] = {{1, 2}, {2, 3}};
    cout << p[0].first << ' ';
    cout << p[0].second << ' ';
    cout << p[1].first << ' ';
    cout << p[1].second << ' ';
    cout << '\n';
    pair<int, pair<int,int>> q = {1, {2, 3}};
    cout << q.first << ' ';
    cout << q.second.second << ' ';
    cout << q.first << ' ';
    cout << q.second.first << ' ';
    cout << '\n';

    return 0;
}