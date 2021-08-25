from collections import deque

n,m,k = map(int,input().split())
board = [[0 for _ in range(m)] for _ in range(n)]
visited = [[False for _ in range(m)] for _ in range(n)]
ans = 0 # 최대 크기 영역 저장할 변수

for _ in range(k):
  y,x = map(int,input().split())
  board[y-1][x-1] = 1

def bfs(sx,sy):
  global ans
  visited[sy][sx] = True
  dq = deque([(sx,sy)])
  temp = 0

  while dq:
    x,y = dq.popleft()
    temp += 1

    for dx,dy in [(x+1,y),(x-1,y),(x,y+1),(x,y-1)]:
      if dx < 0 or dx >= m or dy < 0 or dy >= n:
        continue
      
      if board[dy][dx] == 1 and not visited[dy][dx]:
        dq.append((dx,dy))
        visited[dy][dx] = True
  
  ans = max(temp,ans)

for y in range(n):
  for x in range(m):
    if board[y][x] == 1 and not visited[y][x]:
      bfs(x,y)

print(ans)