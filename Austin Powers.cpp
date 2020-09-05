#include "solution.hpp"
using namespace std;


class Solution {
    public:
    bool solve(int n) {
        // Write your code here
        return (n != 0) && ((n & (n - 1)) == 0);
    }
};
