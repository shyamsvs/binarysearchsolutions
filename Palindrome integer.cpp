#include "solution.hpp"
using namespace std;


class Solution {
    public:
    bool solve(int num) {
        // Write your code here
        int ncopy = num;
        int rev =0,rem;
        while(ncopy){
            rem = ncopy % 10;
            rev = rev * 10 + rem;
            ncopy = ncopy/10;
        }
        return rev == num;
    }
};
