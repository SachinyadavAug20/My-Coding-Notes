#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;
#define ll long long

class Twitter {
public:
  // plan
  // for follows -> map of hashmap of followers -> followees(set)
  // for user tweets -> map of user -> tweet(list)
  // need to merge n sorted list -> O(10*K) => take 10 tweets from each user
  //
  unordered_map<int, set<int>> follows;
  unordered_map<int, priority_queue<pair<int, int>>>
      tweets; // userId:{count, tweetId}
  int count = 0;
  Twitter() {
    follows.clear();
    tweets.clear();
    this->count = 0;
  }

  void postTweet(int userId, int tweetId) {
    tweets[userId].push({count, tweetId});
    count++;
  }

  vector<int> getNewsFeed(int userId) {
    priority_queue<pair<int, int>> feed;
    follows[userId].insert(userId);
    for (int f : follows[userId]) {
      auto pq = tweets[f]; // copy
      int cnt = 0;
      while (!pq.empty() && cnt < 10) {
        feed.push(pq.top());
        pq.pop();
        cnt++;
      }
    }
    vector<int> result;
    while (!feed.empty() && result.size() < 10) {
      result.push_back(feed.top().second);
      feed.pop();
    }
    return result;
  }
  void follow(int followerId, int followeeId) {
    follows[followerId].insert(followeeId);
  }

  void unfollow(int followerId, int followeeId) {
    follows[followerId].erase(followeeId);
  }
};
