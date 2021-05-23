from bisect import bisect_left

n = int(input())
lst = list(map(int, input().split()))
q = [-10000000001]  # 수열의 최소값 (-10000000001)
dp = [0 for _ in range(n)]

for i in range(n):
    if q[-1] < lst[i]:
        q.append(lst[i])
        dp[i] = len(q) - 1
    else:
        idx = bisect_left(q, lst[i])
        dp[i] = idx
        q[idx] = lst[i]

ans = []
idx = len(q)-1

print(idx)

for i, v in enumerate(reversed(dp)):
    if v == idx:
        ans.append(lst[n-i-1])
        idx -= 1

print(*reversed(ans))

# q와 ans를 deque로 사용하면 시간초과 나기 때문에 list로 풀었음
# 
