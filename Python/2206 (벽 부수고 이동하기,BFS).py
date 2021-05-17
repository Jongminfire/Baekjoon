from collections import deque

INF = int(1e9)

n, m = map(int, input().split())
graph = [list(map(int, input())) for _ in range(n)]

# 벽을 부시지 않았다면 visit에, 부셨다면 visit2에 기록
visit = [[INF for _ in range(m)] for _ in range(n)]
visit2 = [[INF for _ in range(m)] for _ in range(n)]


def bfs(sx, sy):
    dq = deque()
    dq.append((sx, sy, False))  # x좌표,y좌표,벽 부순 여부
    visit[sx][sy] = 1

    while dq:
        x, y, broke = dq.popleft()

        for nx, ny in [(x, y+1), (x, y-1), (x+1, y), (x-1, y)]:
            if nx < 0 or nx >= n or ny < 0 or ny >= m:
                continue

            if broke:
                if visit2[nx][ny] != INF:
                    continue

                if graph[nx][ny] == 0:
                    dq.append((nx, ny, broke))
                    visit2[nx][ny] = visit2[x][y] + 1
            else:
                if visit[nx][ny] != INF:
                    continue

                if graph[nx][ny] == 1:
                    dq.append((nx, ny, True))
                    visit2[nx][ny] = visit[x][y] + 1
                else:
                    dq.append((nx, ny, broke))
                    visit[nx][ny] = visit[x][y] + 1


bfs(0, 0)

if visit[-1][-1] == visit2[-1][-1] == INF:
    print(-1)
else:
    print(min(visit[-1][-1], visit2[-1][-1]))
