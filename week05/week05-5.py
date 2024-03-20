# LeetCode 2078. Two Furthest Houses With Different Colors
# 用兩個for迴圈, 左手i, 右手j
class Solution:
    def maxDistance(self, colors: List[int]) -> int:
        N = len(colors) # 現在有幾個房子
        ans = 0 # 迴圈前面 ans是0
        for i in range(N): # 左手i
            for j in range(N): # 右手j
                if colors[i] != colors[j] and j-i > ans: # 色彩不同 and 距離更大
                    ans = j-i # 更新ans距離
        return ans # ans拿來用