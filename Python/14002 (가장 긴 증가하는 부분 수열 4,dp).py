from bisect import bisect_left
from collections import deque

n = int(input())
lst = list(map(int, input().split()))
q = deque([0])
dp = [0 for _ in range(n)]  # 숫자의 바뀌는 인덱스를 저장하기 위한 dp

for i in range(n):
    if q[-1] < lst[i]:
        q.append(lst[i])
        dp[i] = len(q) - 1  # 길이가 갱신 될 때는 길이만큼 저장
    else:
        idx = bisect_left(q, lst[i])
        q[idx] = lst[i]
        dp[i] = idx         # 길이가 갱신 되지 않을때는 바뀐 인덱스를 저장

ans = deque()
idx = len(q)-1

print(idx)

for i, v in enumerate(reversed(dp)):
    if v == idx:
        ans.append(lst[n-i-1])  # 처음으로 인덱스가 바뀐 숫자 ans에 추가
        idx -= 1

print(*reversed(ans))   # ans가 뒤집혀있으므로 reversed로 출력
