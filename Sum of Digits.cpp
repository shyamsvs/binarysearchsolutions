#include "solution.hpp"
using namespace std;


class Solution {
    public:
    int solve(int num) {
        // Write your code here
        int s = 0;
        while(num){
            s += num % 10;
            num /= 10;
        }
        return s;
    }
};
