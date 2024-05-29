# week15-1.py 寫到一半的 Python 版, 等一下還有「寫到一半的 C 版」
# LeetCode 1208. Get Equal Substrings Within Budget 寫到一半
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        # 先用 Python 把字串的迴圈寫出來
        N = len(s)  # 先知道字串的長度
        for i in range(N):
            print(s[i], t[i])
        return 0  # 課堂作業1, 先隨便給個0當答案(答案當然不對)
