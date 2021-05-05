import math

n = int(input())
arr = [True for _ in range(n+1)]
decimal = []

# 에라토스테네스의 체
for i in range(2, int(math.sqrt(n))+1):
    if arr[i] == True:
        j = 2
        while i * j <= n:
            arr[i*j] = False
            j += 1

for i, v in enumerate(arr):
    if i > 1 and v == True:
        decimal.append(i)

start = 0
end = 0
total = 0
cnt = 0

# 투포인터로 부분합 n인 개수 카운트
while end < len(decimal):
    if total < n:
        total += decimal[end]
        end += 1

    while total >= n:
        if total == n:
            cnt += 1

        total -= decimal[start]
        start += 1

print(cnt)
