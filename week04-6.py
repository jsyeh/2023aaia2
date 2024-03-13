# LeetCode 2485. Find the Pivot Integer
class Solution:
    def pivotInteger(self, n: int) -> int:
        total = 0
        for i in range(1, n+1):
            total += i
            
        left = 0
        for i in range(1, n+1):
            left += i
            if left == (total-left+i): return i
        return -1