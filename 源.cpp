#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0;
        int flag = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'L')flag--;
            else flag++;
            if (flag == 0) {
                ans++;
                continue;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    string s = "RLRRLLRLRL";
    cout << sol.balancedStringSplit(s);
}