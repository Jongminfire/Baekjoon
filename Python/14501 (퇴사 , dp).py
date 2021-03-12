n = int(input())
lst = [list(map(int,input().split())) for i in range(n)]
size = len(lst)
dp = [0 for _ in range(n+1)]
dp[0] = 0

for i in range(0,len(lst)):
    t = lst[i][0]
    p = lst[i][1]

    # i가 0이 아닐경우 이전 dp와 현재 dp중 큰 값 저장
    if i != 0:
        dp[i] = max(dp[i-1],dp[i])

    # i일의 상담이 전체 길이보다 작은 경우 dp[i+t]와 dp[i]+p 중 큰 값 저장
    if i+t-1 < size:
        dp[i+t] = max(dp[i+t],dp[i]+p)

print(max(dp[-1],dp[-2]))