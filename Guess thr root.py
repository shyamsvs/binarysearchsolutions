class Solution:
    def solve(self, n):
        # Write your code here
        res = n//2
        while True:
            temp = n/res
            if int(res) == int(temp): return int(res)
            res = 0.5 * (res + temp)
