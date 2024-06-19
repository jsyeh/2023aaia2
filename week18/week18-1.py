# week18-1.py SOIT108_Advance_008
a = list(map(int, input().split() ))

a.sort(reverse=True)

for now in a:
	print(now, end=' ')