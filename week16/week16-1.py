# week16-1 的輔助常識1 collections.Counter
# import collections # 修改前
from collections import Counter # 修改後
words = ["bella", "label", "roller"]
for i in range(3):
  # counter = collections.Counter(words[i]) # 修改前
  counter = Counter(words[i]) # 修改後
  print(words[i], counter)
#ans = collections.Counter(words[0])&collections.Counter(words[1])&collections.Counter(words[2]) # 修改前
ans = Counter(words[0]) & Counter(words[1]) & Counter(words[2]) # 修改後
print(ans)