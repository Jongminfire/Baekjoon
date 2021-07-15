from collections import deque

for _ in range(int(input())):
    n = int(input())
    graph = [[-1 for _ in range(n)] for _ in range(n)]
    sx, sy = map(int, input().split())
    ex, ey = map(int, input().split())

    dq = deque()
    dq.append((sx, sy))
    graph[sx][sy] = 0

    while dq:
        x, y = dq.popleft()

        if (x, y) == (ex, ey):
            break

        for nx, ny in [(x-2, y-1), (x-2, y+1), (x-1, y+2), (x-1, y-2), (x+1, y-2), (x+1, y+2), (x+2, y+1), (x+2, y-1)]:
            if nx < 0 or nx >= n or ny < 0 or ny >= n:
                continue

            if graph[nx][ny] == -1:
                graph[nx][ny] = graph[x][y] + 1
                dq.append((nx, ny))

    print(graph[ex][ey])
