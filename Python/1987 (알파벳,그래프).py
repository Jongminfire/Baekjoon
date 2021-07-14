n, m = map(int, input().split())
board = [list(map(lambda x:ord(x)-65, input())) for _ in range(n)]
alpha = [0] * 26    # 알파벳 저장을 set로 할 경우 시간초과 나기 때문에 아스키코드 값 활용한 인덱스로 구현
ans = 1


def dfs(x, y, dist):
    global ans
    ans = max(ans, dist)

    for nx, ny in [(x-1, y), (x+1, y), (x, y+1), (x, y-1)]:
        if nx < 0 or nx >= n or ny < 0 or ny >= m:
            continue

        if alpha[board[nx][ny]] == 0:
            alpha[board[nx][ny]] = 1
            dfs(nx, ny, dist+1)
            alpha[board[nx][ny]] = 0    # dfs 실행 한 뒤 alpha 다시 없애줌 (백트래킹)


alpha[board[0][0]] = 1

dfs(0, 0, ans)

print(ans)
