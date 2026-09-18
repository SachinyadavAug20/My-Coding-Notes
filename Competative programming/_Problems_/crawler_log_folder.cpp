#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;

        for (const string& op : logs) {
            if (op == "../" || op=="..") {
                if (depth > 0) {
                    depth--;
                }
            } else if (op != "./" || op==".") {
                depth++;
            }
        }
        return depth;
    }
};

