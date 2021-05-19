from collections import deque
import sys

input = sys.stdin.readline

m, n, height = map(int, input().split())
board = []
days = -1
dq = deque()

for h in range(height):
    temp = [list(map(int, input().split())) for _ in range(n)]
    board.append(temp)


def bfs():
    while dq:
        x, y, h = dq.popleft()

        for nx, ny, nh in [(x+1, y, h), (x-1, y, h), (x, y+1, h), (x, y-1, h), (x, y, h+1), (x, y, h-1)]:
            if nx < 0 or nx >= n or ny < 0 or ny >= m:
                continue

            if nh < 0 or nh >= height:
                continue

            if board[nh][nx][ny] == 0:
                board[nh][nx][ny] = board[h][x][y] + 1
                dq.append((nx, ny, nh))


# 검사가 필요한 좌표를 미리 deque에 넣음
for h in range(height):
    for x in range(n):
        for y in range(m):
            if board[h][x][y] == 1:
                dq.append((x, y, h))

bfs()

for h in range(height):
    for x in range(n):
        for y in range(m):
            if board[h][x][y] == 0:
                days = 0
                break
            days = max(board[h][x][y], days)

        if days == 0:
            break
    if days == 0:
        break

print(days-1)
