# LeetCode 1219. Path with Maximum Gold
class Solution:
    def getMaximumGold(self, grid: List[List[int]]) -> int:
        M, N = len(grid), len(grid[0])  # 左手i 有M, 右手j 有N

        def helper(i,j): # 要發明1個函式, 會「函式呼叫函式」
            if i<0 or j<0 or i>=M or j>=N: return 0  # 超過範圍的i,j直接結束,沒有金礦
            if grid[i][j]==0: return 0  # 沒有金礦的, 也不能走, 結束
            gold_here = grid[i][j]  # 現在這格, 可收到幾個金礦
            grid[i][j] = 0  # 挖走金礦
            ans1 = helper(i-1, j)  # 繼續往4個方向挖
            ans2 = helper(i+1, j)
            ans3 = helper(i, j+1)
            ans4 = helper(i, j-1)
            grid[i][j] = gold_here # 放回金礦
            return gold_here + max(ans1, ans2, ans3, ans4)

        ans = 0
        for i in range(M):
            for j in range(N):
                ans = max(ans, helper(i,j) )
        return ans