n = int(input())
house = [list(map(int, input().split())) for _ in range(n)]
INF = 1000000   # 범위는 1000*1000
ans = INF

for first in range(3):
    dp = [[INF, INF, INF] for _ in range(n)]

    # 첫번째 색깔을 선택하도록
    dp[0][first] = house[0][first]

    for i in range(1, n):
        dp[i][0] = min(dp[i-1][1], dp[i-1][2])+house[i][0]
        dp[i][1] = min(dp[i-1][0], dp[i-1][2])+house[i][1]
        dp[i][2] = min(dp[i-1][0], dp[i-1][1])+house[i][2]

    for i in range(3):
        # 첫번째 색깔과 같은 경우 제외
        if i != first:
            ans = min(ans, dp[-1][i])

print(ans)
