#include "solution.hpp"
using namespace std;


class Solution {
    public:
    int fact(int a){
        if(a == 1)return 1;
        int f = 1;
        for(int i = 2;i<=a;i++){
            f *= i;
        }
        return f;
    }
    int solve(int n) {
        // Write your code here
        int ans = fact(n);
        return ans;
    }
};
