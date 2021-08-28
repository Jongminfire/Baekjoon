n = int(input())
board = [list(map(int, input().split())) for _ in range(n)]
dp = [[False] * (1 << n) for _ in range(n)] # n개의 False값 저장 (비트 수)
allVisited = (1 << n) - 1   # 전부 방문한 경우 (모든 위치에 1)
INF = float('inf')

def dfs(x, visited):
    # visited가 모든 위치를 방문한 경우
    if visited == allVisited:
        # 0에서 시작해서 0으로 끝나야 하므로
        if board[x][0] != 0:
            return board[x][0]
        else:
            return INF

    # 이미 x정점의 visited 계산을 한 경우
    if dp[x][visited] != False:
        return dp[x][visited]

    dp[x][visited] = INF

    for i in range(n):
        # 경로가 없을 경우
        if not board[x][i]:
            continue
        # visited에 i번째 도시가 포함되어 있는 경우
        if visited & (1 << i):
            continue
            
        # visited | (1<<i) 는 visited에 i번째 도시 추가
        dp[x][visited] = min(
            dfs(i, visited | (1 << i)) + board[x][i], dp[x][visited])

    return dp[x][visited]

print(dfs(0, 1))