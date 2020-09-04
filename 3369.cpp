#include "solution.hpp"
using namespace std;


class Solution {
    public:
        bool check(int a){
        while(a){
            int f = a % 10;
            if((f % 3 == 0 || f % 6 == 0 || f % 9 == 0) && f != 0){
                return true;
            }
            a = a/10;
        }
        return false;
    }

    vector<string> solve(int n) {
        vector<string> s;
        string p = "clap";
        for(int i=1;i<=n;i++){
            if(i % 3 == 0 || i % 6 == 0 || i % 9 == 0){
                s.push_back(p);
            }
            else{
                if(check(i)){
                    s.push_back(p);
                }
                else{
                    stringstream ss;
                    ss<<i;
                    string k;
                    ss>>k;
                    s.push_back(k);
                }
            }
        }
        return s;
    }
};
