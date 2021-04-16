import math

m, n = map(int, input().split())
arr = [True for _ in range(n+1)]

# 에라토스테네스의 체
for i in range(2, int(math.sqrt(n))+1):
    if arr[i] == True:
        j = 2
        while i*j <= n:
            arr[i*j] = False
            j += 1

for i in range(max(2, m), n+1):
    if arr[i]:
        print(i)
