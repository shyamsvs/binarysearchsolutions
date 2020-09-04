#include "solution.hpp"
using namespace std;


class Solution {
    public:
    bool solve(vector<int>& nums, int k) {
        // Write your code here
        sort(nums.begin(),nums.end());
        int left = 0;
        int right = nums.size() - 1;
        while(left < right){
            if(nums[left] + nums[right] == k){
                return true;
            }
            else if(nums[left] + nums[right] > k){
                right--;
            }
            else{
                left++;
            }
        }
        return false;
    }
};
