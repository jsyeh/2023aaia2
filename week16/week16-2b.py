# week16-2.py LeetCode 1002
class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        # 其實題目不是3個, 修改前
        # counter = Counter(words[0]) & Counter(words[1]) & Counter(words[2])
        counter = Counter(words[0]) 
        for i in range(1,len(words)):
            counter &= Counter(words[i])
        ans = []
        for c in counter:
            for i in range(counter[c]): # 看要重覆幾次
                ans.append(c)  # 就重覆幾次
        return ans