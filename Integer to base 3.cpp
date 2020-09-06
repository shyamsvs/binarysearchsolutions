#include "solution.hpp"
using namespace std;


class Solution {
    public:
    string solve(int n) {
        // Write your code here
        string a;
        int mul = 1;
        if(n<0) {
            n *= -1;
            mul = -1;
        }
        while(n>=3){
            char s = n % 3 + '0';
            a.push_back(s);
            n = n / 3;
        }
        char s = n + '0';
        a.push_back(s);
        if(mul == -1)a.push_back('-');
        reverse(a.begin(),a.end());
        return a;
    }
};
