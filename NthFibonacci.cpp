#include "solution.hpp"
using namespace std;


class Solution {
    public:
    int solve(int n) {
        // Write your code here
        int fib[n];
        fib[0] = 1;
        fib[1] = 1;
        for(int i=2;i<n;i++){
            fib[i] = fib[i - 1] + fib[i -2];
        }
        return fib[n-1];
    }
};
