#include "solution.hpp"
using namespace std;


class Solution {
    public:
    vector<string> solve(int n) {
        // Write your code here
        vector<string> ans;
        string fizzbuzz = "FizzBuzz";
        string fizz = "Fizz";
        string buzz = "Buzz";
        for(int i=1;i<=n;i++){
            if(i%3 == 0 && i %5 == 0){
                ans.push_back(fizzbuzz);
            }
            else if(i % 3 == 0){
                ans.push_back(fizz);
            }
            else if(i % 5 == 0){
                ans.push_back(buzz);
            }
            else{
                stringstream ss;
                ss << i;
                string s;
                ss >> s;
                ans.push_back(s);
            }
        }
        return ans;
    }
};
