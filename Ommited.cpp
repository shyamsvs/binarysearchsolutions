#include "solution.hpp"
using namespace std;


class Solution {
    public:
    vector<int> solve(vector<int>& nums) {
        // Write your code here
        int size = nums.size();
    vector<int> temp(size);
    temp[size - 1] = 1;
    
    int product = nums[size - 1];
    for (int i = size - 2; i >= 0; i--) {
      temp[i] = product;
      product = product * nums[i];
    }
    
    product = nums[0];
    for (int i = 1; i < size; i++) {
      temp[i] = temp[i] * product;
      product = product * nums[i];
    }
    
    return temp;
        
    }
};
