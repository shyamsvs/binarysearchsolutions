#include "solution.hpp"
using namespace std;


class Solution {
    public:
    vector<int> solve(int n) {
        // Write your code here
        int prev = 1;
        vector<int> ans;
        ans.push_back(prev);
        for(int i=1;i<=n;i++){
            int c = (prev * (n - i + 1))/i;
            ans.push_back(c);
            prev = c;
        }
        return ans;
    }
};
