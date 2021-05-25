# sys.stdin.readline 시 시간초과

def dfs(x, y, direct):
    global cnt

    if x == n-1 and y == n-1:
        cnt += 1
        return

    # 검사 반복문으로 하면 시간 초과
    if direct == 0 or direct == 1:
        if y+1 < n:
            if not board[x][y+1]:
                dfs(x, y+1, 0)

    if direct == 1 or direct == 2:
        if x+1 < n:
            if not board[x+1][y]:
                dfs(x+1, y, 2)

    if x+1 < n and y+1 < n:
        if not board[x+1][y+1] and not board[x][y+1] and not board[x+1][y]:
            dfs(x+1, y+1, 1)


n = int(input())
board = [list(map(int, input().split())) for _ in range(n)]
cnt = 0
dfs(0, 1, 0)

print(cnt)

# python3은 시간초과로 pypy3로 제출함
