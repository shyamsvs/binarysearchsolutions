#include "solution.hpp"
using namespace std;


class Solution {
    public:
    unsigned int countSetBits(int n) 
    { 
        unsigned int count = 0; 
        while (n) { 
            n &= (n - 1); 
            count++; 
        } 
        return count; 
    } 
    int solve(int n) {
        // Write your code here
        return countSetBits(n);
    }
};
