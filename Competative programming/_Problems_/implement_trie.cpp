#include <bits/stdc++.h>
using namespace std;

#define fastio() (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long

// obs
// will store the commen prefixes of the words
/*
                root
               /    \
              a      b
              |      |
              p      a
             / \     |
            p   e    t
            |
            l
            |
            e
*/

class Trie {
private:
    struct TrieNode {
        int cnt;
        TrieNode* children[26];

        TrieNode() {
            cnt = 0;
            memset(children, 0, sizeof(children));// initialize all the children to null
        }
    };

    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* current = root;

        for (char ch : word) {
            int index = ch - 'a';

            if (current->children[index] == nullptr) {
                current->children[index] = new TrieNode();
            }

            current = current->children[index];
        }

        current->cnt = 1; // as word ended
    }

    bool search(string word) {
        TrieNode* current = root;

        for (char ch : word) {
            int index = ch - 'a';

            if (current->children[index] == nullptr) {
                return false;
            }

            current = current->children[index];
        }

        return current->cnt == 1;
    }

    bool startsWith(string prefix) {
        TrieNode* current = root;

        for (char ch : prefix) {
            int index = ch - 'a';

            if (current->children[index] == nullptr) {
                return false;
            }

            current = current->children[index];
        }

        return true;
    }
};

