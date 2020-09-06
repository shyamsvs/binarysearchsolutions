#include "solution.hpp"
using namespace std;


class Solution {
    public:
    bool solve(string s) {
        // Write your code here
        if(s.size() == 0)return true;
        sort(s.begin(),s.end());
        for(int i=0;i<s.size() - 1;i++){
            if(s[i]==s[i+1]){
                return false;
            }
        }
        return true;
        
    }
};
