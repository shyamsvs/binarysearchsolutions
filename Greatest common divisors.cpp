#include "solution.hpp"
using namespace std;


class Solution {
    public:
    int gcd(int m,int n){
        if(m == 0)return n;
        return gcd(n%m,m);
    }
    int solve(vector<int>& nums) {
        // Write your code here
        int res = nums[0];
        for(int i=1;i<nums.size();i++){
            res = gcd(res , nums[i]);
            if(res == 1)return 1;
        }
        return res;
    }
};
