#include "solution.hpp"
using namespace std;


class Solution {
    public:
    int solve(vector<int>& nums) {
        // Write your code here
        vector<int> c = nums;
        sort(nums.begin(),nums.end());
        int count = 0;
        //for(auto i : c)cout << i << " ";
        for(int i=0;i<nums.size();i++){
            if(nums[i] == c[i]){
                count++;
            }
        }
        return count;
    }
};
