#include "solution.hpp"
using namespace std;


class Solution {
    public:
    int solve(vector<int>& nums) {
        // Write your code here
        sort(nums.begin(),nums.end());
        int start = 1;
        for(auto i : nums){
            if(i <= 0){
                continue;
            }
            else{
                if(i == start){
                    start++;
                    continue;
                }
                else{
                    return start;
                }
            }
        }
        return start;
    }
};
