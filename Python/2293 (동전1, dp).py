import sys

n,k = map(int,sys.stdin.readline().rstrip().split())
dp = [0 for _ in range(k+1)]
coin = []

for _ in range(n):
  coin.append(int(sys.stdin.readline().rstrip()))

# dp[0]에 1을 넣음으로써 경우의 수를 1씩 더함
dp[0] = 1

# 코인 순서대로 계산
for i in coin:
    for j in range(1,k+1):
        if j-i >= 0 :
            dp[j] += dp[j-i]

print(dp[-1])