import math

n, k = map(int, input().split())
arr = [True for _ in range(n+1)]
cnt = 0
ans = 0

for i in range(2, n+1):
    if arr[i] == True:
        j = 1
        while i * j <= n:
            if arr[i*j] == True:
                cnt += 1
                arr[i*j] = False
            if cnt == k:
                ans = i*j
                break

            j += 1

print(ans)
