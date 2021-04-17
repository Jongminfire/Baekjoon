import math

# 10^14까지가 범위이므로 INF범위 설정
INF = 10**7
arr = [True for _ in range(INF+1)]

# 에라토스테네스의 체
for i in range(2, int(math.sqrt(INF))+1):
    if arr[i] == True:
        j = 2
        while i*j <= INF:
            arr[i*j] = False
            j += 1

a, b = map(int, input().split())
cnt = 0

for i in range(2, int(math.sqrt(b))+1):
    if arr[i] == True:
        j = i*i

        while j <= b:
            if a <= j:
                cnt += 1
            j *= i

print(cnt)
