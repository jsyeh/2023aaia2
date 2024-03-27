# week04-5.py A021 Python
a = int(input())

ans = 1
for i in range(1,a+1):
	ans *= i
	
print(ans, end='')