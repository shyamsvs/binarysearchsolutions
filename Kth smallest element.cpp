#include "solution.hpp"
using namespace std;


class Solution {
    public:
    int solve(vector<int>& nums, int k) {
        // Write your code here
        sort(nums.begin(),nums.end());
        return nums[k];
    }
};
